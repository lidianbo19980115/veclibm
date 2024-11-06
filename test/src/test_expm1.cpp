// SPDX-FileCopyrightText: 2023 Rivos Inc.
//
// SPDX-License-Identifier: Apache-2.0

#include <gtest/gtest.h>
#include <math.h>

#include "rvvlm.h"
#include "test_infra.h"

TEST(expm1, special) {
  int nb_tv;
  int64_t tv_in_out[2 * (NB_TV_FOR_EXPM1)] = TV_FOR_EXPM1;

  nb_tv = NB_TV_FOR_EXPM1;

  test_vectors_fp64(rvvlm_expm1, tv_in_out, nb_tv);
}

TEST(expm1, small_args) {
  unsigned long nb_tests;
  double x_start, x_end;

  COMMENT("expm1: current chosen algorithm; reduced argument in FP64 only")

  x_start = -0.01;
  x_end = 0.01;
  nb_tests = 30000;
  report_err_fp64(rvvlm_expm1, expm1l, x_start, x_end, nb_tests);

  x_start = -.3;
  x_end = 0.3;
  nb_tests = 10000;
  report_err_fp64(rvvlm_expm1, expm1l, x_start, x_end, nb_tests);
}

TEST(expm1, medium_args) {
  unsigned long nb_tests;
  double x_start, x_end;

  COMMENT("expm1: current chosen algorithm; reduced argument in FP64 only")

  x_start = 1.0;
  x_end = 10.0;
  nb_tests = 10000;
  report_err_fp64(rvvlm_expm1, expm1l, x_start, x_end, nb_tests);

  x_start = -10.0;
  x_end = -1.0;
  nb_tests = 10000;
  report_err_fp64(rvvlm_expm1, expm1l, x_start, x_end, nb_tests);

  x_start = -40.0;
  x_end = -36.0;
  nb_tests = 10000;
  report_err_fp64(rvvlm_expm1, expm1l, x_start, x_end, nb_tests);

  x_start = 36.0;
  x_end = 40.0;
  nb_tests = 10000;
  report_err_fp64(rvvlm_expm1, expm1l, x_start, x_end, nb_tests);
}

TEST(expm1, large_args) {
  unsigned long nb_tests;
  double x_start, x_end;

  COMMENT("expm1: current chosen algorithm; reduced argument in FP64 only")

  x_start = 700.0;
  x_end = 709.0;
  nb_tests = 40000;
  report_err_fp64(rvvlm_expm1, expm1l, x_start, x_end, nb_tests);

  x_start = -50.0;
  x_end = -40.0;
  nb_tests = 40000;
  report_err_fp64(rvvlm_expm1, expm1l, x_start, x_end, nb_tests);
}
