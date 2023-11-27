//
//   Copyright 2023  Rivos Inc.
//
//   Licensed under the Apache License, Version 2.0 (the "License");
//   you may not use this file except in compliance with the License.
//   You may obtain a copy of the License at
//
//       http://www.apache.org/licenses/LICENSE-2.0
//
//   Unless required by applicable law or agreed to in writing, software
//   distributed under the License is distributed on an "AS IS" BASIS,
//   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//   See the License for the specific language governing permissions and
//   limitations under the License.
//

// Macros for common small-block codes
#define EXCEPTION_HANDLING_LOG(vx, special_args, vy_special, n_adjust, vlen) \
do { \
  VUINT vclass = __riscv_vfclass((vx), (vlen)); \
  /* special handling except positive normal number */ \
  IDENTIFY(vclass, 0x3BF, (special_args), (vlen)); \
  UINT nb_special_args = __riscv_vcpop((special_args), (vlen)); \
  n_adjust = VMVI_VX(0, (vlen)); \
  if (nb_special_args > 0) { \
    VBOOL id_mask; \
    /* substitute negative arguments with sNaN */ \
    IDENTIFY(vclass, class_negative, id_mask, (vlen)); \
    vx = __riscv_vfmerge(vx, fp_sNaN, id_mask, vlen); \
    /* substitute +0 argument with -0 */ \
    IDENTIFY(vclass, class_posZero, id_mask, vlen); \
    vx = __riscv_vfmerge(vx, fp_negZero, id_mask, vlen); \
    /* eliminate positive denorm input from special_args */ \
    IDENTIFY(vclass, 0x39F, (special_args), (vlen)); \
    /* for narrowed set of special arguments, compute vx+vfrec7(vx) */ \
    vy_special = __riscv_vfrec7((special_args), (vx), (vlen)); \
    vy_special = __riscv_vfadd((special_args), vy_special, (vx), (vlen)); \
    vx = __riscv_vfmerge((vx), fp_posOne, (special_args), (vlen)); \
    /* scale up input for positive denormals */ \
    IDENTIFY(vclass, class_posDenorm, id_mask, (vlen)); \
    n_adjust = __riscv_vmerge(n_adjust, 64, id_mask, vlen); \
    VFLOAT vx_normalized = __riscv_vfmul(id_mask, vx, 0x1.0p64, vlen); \
    vx = __riscv_vmerge(vx, vx_normalized, id_mask, vlen); \
  } \
} while(0)

#if defined(COMPILE_FOR_LOG)
#if (STRIDE == UNIT_STRIDE)
#define F_VER1    RVVLM_LOGD_TBL128
#else
#define F_VER1    RVVLM_LOGDI_TBL128
#endif
#define LOGB_2_HI 0x1.62e42fefa39efp-1
#define LOGB_2_LO 0x1.abc9e3b39803fp-56 
#define LOGB_e_HI 0x1.0p0
#define LOGB_e_LO 0.0
#elif defined(COMPILE_FOR_LOG2)
#if (STRIDE == UNIT_STRIDE)
#define F_VER1    RVVLM_LOG2D_TBL128
#else
#define F_VER1    RVVLM_LOG2DI_TBL128
#endif
#define LOGB_2_HI 0x1.0p0
#define LOGB_2_LO 0.0
#define LOGB_e_HI 0x1.71547652b82fep+0 
#define LOGB_e_LO 0x1.777d0ffda0d24p-56 
#elif defined(COMPILE_FOR_LOG10)
#if (STRIDE == 1)
#define F_VER1    RVVLM_LOG10D_TBL128
#else
#define F_VER1    RVVLM_LOG10DI_TBL128
#endif
#define LOGB_2_HI  0x1.34413509f79ffp-2
#define LOGB_2_LO -0x1.9dc1da994fd00p-59 
#define LOGB_e_HI  0x1.bcb7b1526e50ep-2 
#define LOGB_e_LO  0x1.95355baaafad3p-57
#else
static_assert(false, "Must specify base of logarithm" __FILE__);
#endif

#include <fenv.h>

// Version 1 uses a 128-entry LUT
void F_VER1(API) {
    size_t vlen;
    VFLOAT vx, vy, vy_special;
    VBOOL special_args;
    VINT n_adjust;

    SET_ROUNDTONEAREST;
    // stripmining over input arguments
    for (; _inarg_n > 0; _inarg_n -= vlen) {
        vlen = VSET(_inarg_n);
        vx = VFLOAD_INARG1(vlen);

        // NaN, Inf, and -ve handling, as well as scaling denormal input by 2^64
        EXCEPTION_HANDLING_LOG(vx, special_args, vy_special, n_adjust, vlen);
 
        // in_arg at this point are positive, finite and not subnormal
        // Decompose in_arg into n, B, r: in_arg = 2^n (1/B) (1 + r)
        // B is equivalently defined by ind, 0 <= ind < 128
        VINT n = U_AS_I(__riscv_vadd(__riscv_vsrl(F_AS_U(vx), MAN_LEN-1, vlen), 1, vlen));
        n = __riscv_vsra(n, 1, vlen);
        n = __riscv_vsub(n, EXP_BIAS, vlen);
        vx = U_AS_F(__riscv_vsrl(__riscv_vsll(F_AS_U(vx), BIT_WIDTH-MAN_LEN, vlen), 
                    BIT_WIDTH-MAN_LEN, vlen));
        vx = U_AS_F(__riscv_vadd(F_AS_U(vx), (uint64_t)EXP_BIAS << MAN_LEN, vlen));
        n = __riscv_vsub(n, n_adjust, vlen);
        VFLOAT n_flt = __riscv_vfcvt_f(n, vlen);
        VFLOAT B = __riscv_vfrec7(vx, vlen);
        // get 7 msb of mantissa, and left shift by 3 to get address 
        VUINT ind = __riscv_vand(__riscv_vsrl(F_AS_U(vx), MAN_LEN-10, vlen), 0x3F8, vlen);
        // adjust B to be 1.0 if ind == 0
        VBOOL adjust_B = __riscv_vmseq(ind, 0, vlen);
        B = __riscv_vfmerge(B, fp_posOne, adjust_B, vlen);        
        // finally get r = B * in_arg - 1.0
        VFLOAT r = VFMV_VF(fp_posOne, vlen);
        r = __riscv_vfmsac(r, vx, B, vlen);

        // Base-B log is logB(in_arg) = logB(2^n * 1/B) + logB(1 + r)
        // (n + log2(1/B))*logB(2) + log(1+r)*logB(e) 
        // log2(1/B) is stored in a table
        // and log(1+r) is approximated by r + poly
        // poly is a polynomial in r in the form r^2 * (p0 + p1 r + ... ) 
        // To deliver this result accurately, one uses logB(2) and logB(e)
        // with extra precision and sums the various terms in an appropriate order
        VFLOAT rsq = __riscv_vfmul(r, r, vlen);
        VFLOAT rcube = __riscv_vfmul(rsq, r, vlen);

        VFLOAT poly_right = PSTEP( 0x1.9999998877038p-3, r,
                            PSTEP(  -0x1.555c54f8b7c6cp-3, 0x1.2499765b3c27ap-3, r,
                            vlen), vlen);

        VFLOAT poly_left = PSTEP( -0x1.000000000001cp-1, r,
                           PSTEP(  0x1.55555555555a9p-2, -0x1.fffffff2018cfp-3, r,
                           vlen), vlen);

        VFLOAT poly = __riscv_vfmadd(poly_right, rcube, poly_left, vlen);
        poly = __riscv_vfmul(rsq, poly, vlen);
        // log_e(1+r) is r + poly
    
        // Load table values and get n_flt + T to be A + a
        VINT T = __riscv_vluxei64(logD_tbl128_fixedpt, ind, vlen);
        VINT T_hi = __riscv_vsll(__riscv_vsra(T, 24, vlen), 24, vlen);
        VINT T_lo = __riscv_vsub(T, T_hi, vlen);
        VFLOAT T_hi_flt = __riscv_vfcvt_f(T_hi, vlen);
        VFLOAT A = __riscv_vfmadd(T_hi_flt, 0x1.0p-63, n_flt, vlen);
        VFLOAT a = __riscv_vfcvt_f(T_lo, vlen);
        a = __riscv_vfmul(a, 0x1.0p-63, vlen);

        // Compute (A + a) * (logB_2_hi + logB_2_lo) + (r + P) * (logB_e_hi + logB_e_lo)
        // where B can be e, 2, or 10
        VFLOAT delta_1 = __riscv_vfmul(A, LOGB_2_LO, vlen);
        delta_1 = __riscv_vfmadd(a, LOGB_2_HI, delta_1, vlen);
#if !defined(COMPILE_FOR_LOG)
        delta_1 = __riscv_vfmacc(delta_1, LOGB_e_LO, r, vlen);
        poly = __riscv_vfmadd(poly, LOGB_e_HI, delta_1, vlen);
#else
        poly = __riscv_vfadd(poly, delta_1, vlen);
#endif

#if !defined(COMPILE_FOR_LOG)
        poly = __riscv_vfmacc(poly, LOGB_e_HI, r, vlen);
#else
        poly = __riscv_vfadd(poly, r, vlen);
#endif

#if !defined(COMPILE_FOR_LOG2)
        vy = __riscv_vfmadd(A, LOGB_2_HI, poly, vlen);
#else
        vy = __riscv_vfadd(A, poly, vlen);
#endif
        vy = __riscv_vmerge(vy, vy_special, special_args, vlen);

        // copy vy into y and increment addr pointers
        VFSTORE_OUTARG1(vy, vlen);

        INCREMENT_INARG1(vlen);
        INCREMENT_OUTARG1(vlen);

    }
    RESTORE_FRM;
}
