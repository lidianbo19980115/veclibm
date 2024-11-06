// SPDX-FileCopyrightText: 2023 Rivos Inc.
//
// SPDX-License-Identifier: Apache-2.0

#include <gtest/gtest.h>
#include <math.h>

#include "rvvlm.h"
#include "test_infra.h"

TEST(exp10, special) {
  int nb_tv;
  int64_t tv_in_out[2 * (NB_TV_FOR_EXP)] = TV_FOR_EXP;

  nb_tv = NB_TV_FOR_EXP;

  test_vectors_fp64(rvvlm_exp10, tv_in_out, nb_tv);
}

TEST(exp10, small_args) {
  unsigned long nb_tests;
  double x_start, x_end;

  COMMENT("exp10: current chosen algorithm; reduced argument in FP64 only")

  x_start = -0.34;
  x_end = 0.34;
  nb_tests = 30000;
  report_err_fp64(rvvlm_exp10, exp10l, x_start, x_end, nb_tests);

  x_start = -3.0;
  x_end = 3.0;
  nb_tests = 40000;
  report_err_fp64(rvvlm_exp10, exp10l, x_start, x_end, nb_tests);
}

TEST(exp10, medium_args) {
  unsigned long nb_tests;
  double x_start, x_end;

  COMMENT("exp10: current chosen algorithm; reduced argument in FP64 only")

  x_start = -15.0;
  x_end = -10.0;
  nb_tests = 40000;
  report_err_fp64(rvvlm_exp10, exp10l, x_start, x_end, nb_tests);

  x_start = 10.0;
  x_end = 15.0;
  nb_tests = 40000;
  report_err_fp64(rvvlm_exp10, exp10l, x_start, x_end, nb_tests);
}

TEST(exp10, large_args) {
  unsigned long nb_tests;
  double x_start, x_end;

  COMMENT("exp10: current chosen algorithm; reduced argument in FP64 only")

  x_start = 295.0;
  x_end = 308.0;
  nb_tests = 40000;
  report_err_fp64(rvvlm_exp10, exp10l, x_start, x_end, nb_tests);

  x_start = -323.0;
  x_end = -300.0;
  nb_tests = 40000;
  report_err_fp64(rvvlm_exp10, exp10l, x_start, x_end, nb_tests);
}
