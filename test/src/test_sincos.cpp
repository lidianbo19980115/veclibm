// SPDX-FileCopyrightText: 2023 Rivos Inc.
//
// SPDX-License-Identifier: Apache-2.0

#include <gtest/gtest.h>
#include <math.h>

#include "rvvlm.h"
#include "test_infra.h"

TEST(sincos, small_args) {
  unsigned long nb_tests;
  double x_start, x_end;

  COMMENT("sin: current chosen algorithm; reduced argument in FP64 only")

  x_start = -0.78;
  x_end = 0.78;
  nb_tests = 40000;
  report_err_fp64(rvvlm_sincos, sinl, 1, x_start, x_end, nb_tests);
  report_err_fp64(rvvlm_sincos, cosl, 2, x_start, x_end, nb_tests);

  x_start = -6.0;
  x_end = 6.0;
  nb_tests = 40000;
  report_err_fp64(rvvlm_sincos, sinl, 1, x_start, x_end, nb_tests);
  report_err_fp64(rvvlm_sincos, cosl, 2, x_start, x_end, nb_tests);
}

TEST(sincos, large_args) {
  unsigned long nb_tests;
  double x_start, x_end;

  COMMENT("sin: current chosen algorithm; reduced argument in FP64 only")

  x_start = -0.78;
  x_end = 0.78;
  nb_tests = 40000;
  report_err_fp64(rvvlm_sincos, sinl, 1, x_start, x_end, nb_tests);
  report_err_fp64(rvvlm_sincos, cosl, 2, x_start, x_end, nb_tests);

  x_start = -6.0;
  x_end = 6.0;
  nb_tests = 40000;
  report_err_fp64(rvvlm_sincos, sinl, 1, x_start, x_end, nb_tests);
  report_err_fp64(rvvlm_sincos, cosl, 2, x_start, x_end, nb_tests);

  x_start = 1.0;
  x_end = 0x1.0p23;
  nb_tests = 40000;
  report_err_fp64(rvvlm_sincos, sinl, 1, x_start, x_end, nb_tests);
  report_err_fp64(rvvlm_sincos, cosl, 2, x_start, x_end, nb_tests);

  x_start = 0x1.0p25;
  x_end = 0x1.0p100;
  nb_tests = 40000;
  report_err_fp64(rvvlm_sincos, sinl, 1, x_start, x_end, nb_tests);
  report_err_fp64(rvvlm_sincos, cosl, 2, x_start, x_end, nb_tests);
}

TEST(sincos, near_Npiby2) {
#include "near_NPiby2_tbl.h"
  unsigned long nb_tests;

  COMMENT("sin: current chosen algorithm; reduced argument in FP64 only")

  nb_tests = (NB_TEST_ARGS);
  report_err_fp64(rvvlm_sincos, sinl, 1, dbl_near_NPiby2_tbl, nb_tests);
  report_err_fp64(rvvlm_sincos, cosl, 2, dbl_near_NPiby2_tbl, nb_tests);
}
