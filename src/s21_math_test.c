#include "s21_math.h"

#include <check.h>
#include <locale.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

// abs

START_TEST(abs_test_1) { ck_assert_int_eq(s21_abs(0), abs(0)); }
END_TEST

START_TEST(abs_test_2) { ck_assert_int_eq(s21_abs(-21), abs(-21)); }
END_TEST

START_TEST(abs_test_3) { ck_assert_int_eq(s21_abs(21), abs(21)); }
END_TEST

START_TEST(abs_test_4) {
  ck_assert_int_eq(s21_abs((int)-INFINITY), abs((int)-INFINITY));
}
END_TEST

START_TEST(abs_test_5) { ck_assert_int_eq(s21_abs((int)NAN), abs((int)NAN)); }
END_TEST

START_TEST(abs_test_6) { ck_assert_int_eq(s21_abs(-0), abs(0)); }
END_TEST

START_TEST(abs_test_7) { ck_assert_int_eq(s21_abs(11111), abs(11111)); }
END_TEST

START_TEST(abs_test_8) { ck_assert_int_eq(s21_abs(-111111), abs(-111111)); }
END_TEST

// acos

START_TEST(acos_test_1) {
  ck_assert_double_eq_tol(s21_acos(-1), acos(-1), 1e-15);
}
END_TEST

START_TEST(acos_test_2) {
  ck_assert_double_eq_tol(s21_acos(0), acos(0), 1e-15);
}
END_TEST

START_TEST(acos_test_3) {
  ck_assert_double_eq_tol(s21_acos(1), acos(1), 1e-15);
}
END_TEST

START_TEST(acos_test_4) {
  ck_assert_double_eq_tol(acos(0.1234), s21_acos(0.1234), 1e-15);
}
END_TEST

START_TEST(acos_test_5) {
  ck_assert_double_eq_tol(s21_acos(-1), acos(-1), 1e-15);
}
END_TEST

START_TEST(acos_test_6) {
  ck_assert_double_eq_tol(s21_acos(-0.5), acos(-0.5), 1e-15);
}
END_TEST

START_TEST(acos_test_7) {
  ck_assert_double_nan(s21_acos(-INFINITY));
  ck_assert_double_nan(acos(-INFINITY));
}
END_TEST

START_TEST(acos_test_8) { ck_assert_int_eq(s21_acos(2), acos(2)); }
END_TEST

// asin

START_TEST(asin_test_1) {
  ck_assert_double_eq_tol(s21_asin(-1), asin(-1), 1e-15);
}
END_TEST

START_TEST(asin_test_2) {
  ck_assert_double_eq_tol(s21_asin(0), asin(0), 1e-15);
}
END_TEST

START_TEST(asin_test_3) {
  ck_assert_double_eq_tol(s21_asin(1), asin(1), 1e-15);
}
END_TEST

START_TEST(asin_test_4) {
  ck_assert_double_eq_tol(asin(0.1234), s21_asin(0.1234), 1e-15);
}
END_TEST

START_TEST(asin_test_5) {
  ck_assert_double_eq_tol(s21_asin(-1), asin(-1), 1e-15);
}
END_TEST

START_TEST(asin_test_6) {
  ck_assert_double_eq_tol(s21_asin(-0.5), asin(-0.5), 1e-15);
}
END_TEST

START_TEST(asin_test_7) {
  ck_assert_double_nan(s21_asin(-INFINITY));
  ck_assert_double_nan(asin(-INFINITY));
}
END_TEST

START_TEST(atan_test_1) {
  double x = -1.0;
  ck_assert_ldouble_eq_tol(s21_atan(x), atan(x), 1e-6);
}
END_TEST

START_TEST(atan_test_2) {
  double x = -1233;
  ck_assert_ldouble_eq_tol(s21_atan(x), atan(x), 1e-6);
}
END_TEST

START_TEST(atan_test_3) {
  double x = 0;
  ck_assert_ldouble_eq_tol(s21_atan(x), atan(x), 1e-6);
}
END_TEST

START_TEST(atan_test_4) {
  double x = S21_NAN;
  ck_assert_ldouble_nan(atan(x));
}
END_TEST

START_TEST(atan_test_5) {
  double x = -1;
  ck_assert_ldouble_eq_tol(s21_atan(x), atan(x), 1e-6);
}
END_TEST

START_TEST(atan_test_6) {
  double x = 1;
  ck_assert_ldouble_eq_tol(s21_atan(x), atan(x), 1e-6);
}
END_TEST

START_TEST(atan_test_7) {
  double x = 123456789;
  ck_assert_ldouble_eq_tol(s21_atan(x), atan(x), 1e-6);
}
END_TEST

START_TEST(atan_test_8) {
  double x = -123456789;
  ck_assert_ldouble_eq_tol(s21_atan(x), atan(x), 1e-6);
}
END_TEST

START_TEST(atan_test_9) {
  double x = -12.239721;
  ck_assert_ldouble_eq_tol(s21_atan(x), atan(x), 1e-6);
}
END_TEST

START_TEST(atan_test_10) {
  double x = S21_INF;
  ck_assert_ldouble_eq_tol(s21_atan(x), atan(x), 1e-6);
}
END_TEST

START_TEST(atan_test_11) {
  double x = S21_PI;
  ck_assert_ldouble_eq_tol(s21_atan(x), atan(x), 1e-6);
}
END_TEST

START_TEST(atan_test_12) {
  double x = -S21_INF;
  ck_assert_ldouble_eq_tol(s21_atan(x), atan(x), 1e-6);
}
END_TEST

START_TEST(atan_test_13) {
  double x = -S21_PI;
  ck_assert_ldouble_eq_tol(s21_atan(x), atan(x), 1e-6);
}
END_TEST

START_TEST(atan_test_14) {
  double x = 100;
  ck_assert_ldouble_eq_tol(s21_atan(x), atan(x), 1e-6);
}
END_TEST

START_TEST(atan_test_15) {
  ck_assert_double_nan(s21_atan(NAN));
  ck_assert_double_nan(atan(NAN));
}
END_TEST

START_TEST(atan_test_16) {
  double x = 0;
  ck_assert_ldouble_eq_tol(s21_atan(x), atan(x), 1e-6);
}
END_TEST

// ceil

START_TEST(ceil_test_1) {
  ck_assert_double_eq_tol(s21_ceil(-21.21), ceil(-21.21), 1e-15);
}
END_TEST

START_TEST(ceil_test_2) {
  ck_assert_double_eq_tol(s21_ceil(21.21), ceil(21.21), 1e-15);
}
END_TEST

START_TEST(ceil_test_3) {
  ck_assert_double_eq(s21_ceil(INFINITY), ceil(INFINITY));
}
END_TEST

START_TEST(ceil_test_4) {
  ck_assert_double_eq(s21_ceil(-INFINITY), ceil(-INFINITY));
}
END_TEST

START_TEST(ceil_test_5) {
  ck_assert_double_nan(s21_ceil(NAN));
  ck_assert_double_nan(ceil(NAN));
}
END_TEST

START_TEST(ceil_test_6) {
  ck_assert_double_eq_tol(s21_ceil(1.0000002), ceil(1.0000002), 1e-15);
}
END_TEST

// cos

START_TEST(cos_test_1) {
  ck_assert_double_eq_tol(s21_cos(M_PI_2), cos(M_PI_2), 1e-15);
}
END_TEST

START_TEST(cos_test_2) {
  ck_assert_double_eq_tol(s21_cos(-M_PI_2), cos(-M_PI_2), 1e-15);
}
END_TEST

START_TEST(cos_test_3) { ck_assert_double_eq_tol(s21_cos(1), cos(1), 1e-15); }
END_TEST

START_TEST(cos_test_4) {
  ck_assert_double_eq_tol(s21_cos(0.1234), cos(0.1234), 1e-15);
}
END_TEST

START_TEST(cos_test_5) {
  ck_assert_double_eq_tol(s21_cos(3.14), cos(3.14), 1e-15);
}
END_TEST

START_TEST(cos_test_6) {
  ck_assert_double_nan(s21_cos(NAN));
  ck_assert_double_nan(cos(NAN));
}
END_TEST

START_TEST(cos_test_7) {
  ck_assert_double_nan(s21_cos(-INFINITY));
  ck_assert_double_nan(cos(-INFINITY));
}
END_TEST

// exp

START_TEST(exp_test_1) {
  ck_assert_double_eq_tol(s21_exp(1.2345), exp(1.2345), 1e-15);
}
END_TEST

START_TEST(exp_test_2) {
  ck_assert_double_eq_tol(s21_exp(-M_PI_2), exp(-M_PI_2), 1e-15);
}
END_TEST

START_TEST(exp_test_3) { ck_assert_double_eq_tol(s21_exp(0), exp(0), 1e-15); }
END_TEST

START_TEST(exp_test_4) {
  ck_assert_double_eq_tol(s21_exp(0.1234), exp(0.1234), 1e-15);
}
END_TEST

START_TEST(exp_test_5) {
  ck_assert_double_eq_tol(s21_exp(3.14), exp(3.14), 1e-7);
}
END_TEST

START_TEST(exp_test_6) { ck_assert_double_eq_tol(s21_exp(1), exp(1), 1e-15); }
END_TEST

START_TEST(exp_test_7) {
  ck_assert_double_eq(s21_exp(INFINITY), exp(INFINITY));
}
END_TEST

START_TEST(exp_test_8) {
  ck_assert_double_eq_tol(s21_exp(0.332), exp(0.332), 1e-6);
}
END_TEST

START_TEST(exp_test_10) { ck_assert_ldouble_nan(s21_exp(S21_NAN)); }
END_TEST

START_TEST(exp_test_11) { ck_assert_double_eq_tol(s21_exp(-1), exp(-1), 1e-6); }
END_TEST

START_TEST(exp_test_12) { ck_assert_double_eq_tol(s21_exp(1), exp(1), 1e-6); }
END_TEST

START_TEST(exp_test_15) {
  ck_assert_double_eq_tol(s21_exp(0.1234567), exp(0.1234567), 1e-6);
}
END_TEST

START_TEST(exp_test_16) {
  ck_assert_double_eq_tol(s21_exp(-0.34567), exp(-0.34567), 1e-6);
}
END_TEST

START_TEST(exp_test_17) {
  ck_assert_ldouble_eq_tol(s21_exp(S21_PI), exp(S21_PI), 1e-6);
}
END_TEST

START_TEST(exp_test_18) {
  ck_assert_double_eq_tol(s21_exp(-S21_INF), exp(-S21_INF), 1e-6);
}
END_TEST

START_TEST(exp_test_19) {
  ck_assert_double_eq_tol(s21_exp(-S21_EXP), exp(-S21_EXP), 1e-6);
}
END_TEST

START_TEST(exp_test_20) {
  ck_assert_double_eq_tol(s21_exp(S21_EXP), exp(S21_EXP), 1e-6);
}
END_TEST

START_TEST(exp_test_21) {
  ck_assert_double_eq_tol(s21_exp(0.0000134), exp(0.0000134), 1e-6);
}
END_TEST

// fabs

START_TEST(fabs_test_1) {
  ck_assert_double_eq(s21_fabs(21.21212), fabs(21.21212));
}
END_TEST

START_TEST(fabs_test_2) {
  ck_assert_double_eq_tol(s21_fabs(-21.21212), fabs(-21.21212), 1e-15);
}
END_TEST

START_TEST(fabs_test_3) {
  ck_assert_double_eq(s21_fabs(INFINITY), fabs(INFINITY));
}
END_TEST

START_TEST(fabs_test_4) {
  ck_assert_double_nan(s21_fabs(NAN));
  ck_assert_double_nan(fabs(NAN));
}
END_TEST

START_TEST(fabs_test_5) {
  ck_assert_double_eq(s21_fabs(-INFINITY), fabs(-INFINITY));
}
END_TEST

// floor

START_TEST(floor_test_1) {
  ck_assert_double_eq_tol(s21_floor(-21.21212), floor(-21.21212), 1e-15);
}
END_TEST

START_TEST(floor_test_2) {
  ck_assert_double_eq_tol(s21_floor(21.21212), floor(21.21212), 1e-15);
}
END_TEST

START_TEST(floor_test_3) {
  ck_assert_double_eq_tol(s21_floor(1.0000002), floor(1.0000002), 1e-15);
}
END_TEST

START_TEST(floor_test_4) {
  ck_assert_double_eq(s21_floor(INFINITY), floor(INFINITY));
}
END_TEST

START_TEST(floor_test_5) {
  ck_assert_double_nan(s21_floor(NAN));
  ck_assert_double_nan(floor(NAN));
}
END_TEST

START_TEST(floor_test_6) {
  ck_assert_double_eq(s21_floor(-INFINITY), floor(-INFINITY));
}
END_TEST

START_TEST(floor_test_7) {
  ck_assert_double_eq_tol(s21_floor(-2100), floor(-2100), 1e-15);
}
END_TEST

// fmod

START_TEST(fmod_test_1) {
  ck_assert_double_eq_tol(s21_fmod(-21.21212, 2.5), fmod(-21.21212, 2.5),
                          0.000001);
}
END_TEST

START_TEST(fmod_test_2) {
  ck_assert_double_eq_tol(s21_fmod(21.21212, 2.5), fmod(21.21212, 2.5),
                          0.000001);
}
END_TEST

START_TEST(fmod_test_3) {
  ck_assert_double_eq_tol(s21_fmod(0, 2.5), fmod(0, 2.5), 1e-15);
}
END_TEST

START_TEST(fmod_test_4) {
  ck_assert_double_nan(s21_fmod(INFINITY, INFINITY));
  ck_assert_double_nan(fmod(INFINITY, INFINITY));
}
END_TEST

START_TEST(fmod_test_5) {
  ck_assert_double_nan(s21_fmod(-INFINITY, -INFINITY));
  ck_assert_double_nan(fmod(-INFINITY, -INFINITY));
}
END_TEST

START_TEST(fmod_test_6) {
  ck_assert_double_nan(s21_fmod(NAN, NAN));
  ck_assert_double_nan(fmod(NAN, NAN));
}
END_TEST

START_TEST(fmod_test_7) {
  ck_assert_double_nan(s21_fmod(INFINITY, NAN));
  ck_assert_double_nan(fmod(INFINITY, NAN));
}
END_TEST

START_TEST(fmod_test_8) {
  ck_assert_double_nan(s21_fmod(16, 0));
  ck_assert_double_nan(fmod(16, 0));
}
END_TEST

START_TEST(fmod_test_9) {
  ck_assert_double_eq(s21_fmod(16, S21_INF), fmod(16, S21_INF));
}
END_TEST

// log

START_TEST(log_test_1) {
  ck_assert_double_eq_tol(s21_log(21.21212), log(21.21212), 1e-15);
}
END_TEST

START_TEST(log_test_2) {
  ck_assert_double_nan(s21_log(-21.21212));
  ck_assert_double_nan(log(-21.21212));
}
END_TEST

START_TEST(log_test_3) {
  ck_assert_double_eq_tol(s21_fmod(0, 2.5), fmod(0, 2.5), 1e-15);
}
END_TEST

START_TEST(log_test_4) {
  ck_assert_double_nan(s21_log(NAN));
  ck_assert_double_nan(log(NAN));
}
END_TEST

START_TEST(log_test_5) {
  ck_assert_double_nan(s21_log(-INFINITY));
  ck_assert_double_nan(log(-INFINITY));
}
END_TEST

START_TEST(log_test_6) { ck_assert_double_eq(s21_log(0), log(0)); }
END_TEST

START_TEST(log_test_7) { ck_assert_double_eq(s21_log(1), log(1)); }
END_TEST

START_TEST(log_test_8) { ck_assert_double_eq(s21_log(S21_INF), log(S21_INF)); }
END_TEST

// pow

START_TEST(pow_test_1) { ck_assert_float_eq(pow(0, 2.5), s21_pow(0, 2.5)); }
END_TEST

START_TEST(pow_test_2) {
  ck_assert_double_eq(s21_pow(INFINITY, INFINITY), pow(INFINITY, INFINITY));
}
END_TEST

START_TEST(pow_test_3) {
  ck_assert_double_nan(s21_pow(NAN, NAN));
  ck_assert_double_nan(pow(NAN, NAN));
}
END_TEST
START_TEST(pow_test_4) {
  ck_assert_double_nan(s21_pow(INFINITY, NAN));
  ck_assert_double_nan(pow(INFINITY, NAN));
}
END_TEST

START_TEST(pow_test_5) {
  ck_assert_double_nan(s21_pow(NAN, INFINITY));
  ck_assert_double_nan(pow(NAN, INFINITY));
}
END_TEST

START_TEST(pow_test_6) {
  ck_assert_double_nan(s21_pow(NAN, -INFINITY));
  ck_assert_double_nan(pow(NAN, -INFINITY));
}
END_TEST

START_TEST(pow_test_7) { ck_assert_float_eq(pow(4, 0), s21_pow(4, 0)); }
END_TEST

START_TEST(pow_test_8) { ck_assert_float_eq(pow(4, 4), s21_pow(4, 4)); }
END_TEST

START_TEST(pow_test_9) {
  ck_assert_ldouble_eq_tol(pow(1, 0.001), s21_pow(1, 0.001), 1e-6);
}
END_TEST

START_TEST(pow_test_10) { ck_assert_ldouble_nan(s21_pow(1234, S21_NAN)); }
END_TEST

START_TEST(pow_test_11) {
  ck_assert_ldouble_eq_tol(pow(-12, -123), s21_pow(-12, -123), 1e-6);
}
END_TEST

START_TEST(pow_test_12) {
  ck_assert_ldouble_infinite(s21_pow(-S21_INF, 2));
  ck_assert_ldouble_infinite(pow(-S21_INF, 2));
}
END_TEST

START_TEST(pow_test_13) { ck_assert_float_eq(pow(0.1, 4), s21_pow(0.1, 4)); }
END_TEST

START_TEST(pow_test_14) { ck_assert_float_eq(pow(4, 0.1), s21_pow(4, 0.1)); }
END_TEST

START_TEST(pow_test_15) {
  ck_assert_float_eq(pow(0, -S21_INF), s21_pow(0, -S21_INF));
}
END_TEST

START_TEST(pow_test_16) {
  ck_assert_float_eq(pow(S21_INF, 2), s21_pow(S21_INF, 2));
}
END_TEST

START_TEST(pow_test_17) {
  ck_assert_ldouble_infinite(s21_pow(-S21_INF, 5));
  ck_assert_ldouble_infinite(pow(-S21_INF, 5));
}
END_TEST

// sin

START_TEST(sin_test_1) {
  ck_assert_double_eq_tol(s21_sin(M_PI_2), sin(M_PI_2), 1e-15);
}
END_TEST

START_TEST(sin_test_2) {
  ck_assert_double_eq_tol(s21_sin(-M_PI_2), sin(-M_PI_2), 1e-15);
}
END_TEST

START_TEST(sin_test_3) { ck_assert_double_eq_tol(s21_sin(1), sin(1), 1e-15); }
END_TEST

START_TEST(sin_test_4) {
  ck_assert_double_eq_tol(s21_sin(0.1234), sin(0.1234), 1e-15);
}
END_TEST

START_TEST(sin_test_5) {
  ck_assert_double_eq_tol(s21_sin(3.14), sin(3.14), 1e-15);
}
END_TEST

START_TEST(sin_test_6) {
  ck_assert_double_nan(s21_sin(NAN));
  ck_assert_double_nan(sin(NAN));
}
END_TEST

START_TEST(sin_test_7) {
  ck_assert_double_nan(s21_sin(-INFINITY));
  ck_assert_double_nan(sin(-INFINITY));
}
END_TEST

START_TEST(sin_test_8) { ck_assert_double_eq_tol(s21_sin(10), sin(10), 1e-15); }
END_TEST

// sqrt

START_TEST(sqrt_test_1) { ck_assert_double_eq(s21_sqrt(0.0), sqrt(0.0)); }

START_TEST(sqrt_test_2) {
  ck_assert_double_eq(s21_sqrt(INFINITY), sqrt(INFINITY));
}

START_TEST(sqrt_test_3) {
  ck_assert_double_nan(s21_sqrt(NAN));
  ck_assert_double_nan(sqrt(NAN));
}

START_TEST(sqrt_test_4) {
  ck_assert_double_nan(s21_sqrt(-INFINITY));
  ck_assert_double_nan(sqrt(-INFINITY));
}

START_TEST(sqrt_test_5) {
  ck_assert_double_eq_tol(s21_sqrt(0), sqrt(0), 0.000001);
}

START_TEST(sqrt_test_6) { ck_assert_int_eq(s21_sqrt(-123), sqrt(-123)); }

START_TEST(sqrt_test_7) { ck_assert_float_eq(sqrt(3.14), s21_sqrt(3.14)); }

// tan

START_TEST(tan_test_1) { ck_assert_double_eq_tol(s21_tan(1), tan(1), 1e-15); }
END_TEST

START_TEST(tan_test_2) {
  ck_assert_double_eq_tol(s21_tan(0.1234), tan(0.1234), 1e-15);
}
END_TEST

START_TEST(tan_test_3) {
  ck_assert_double_eq_tol(s21_tan(3.14), tan(3.14), 1e-15);
}
END_TEST

START_TEST(tan_test_4) {
  ck_assert_double_nan(s21_tan(NAN));
  ck_assert_double_nan(tan(NAN));
}
END_TEST

START_TEST(tan_test_5) {
  ck_assert_double_nan(s21_tan(-INFINITY));
  ck_assert_double_nan(tan(-INFINITY));
}
END_TEST

Suite *main_suite(void) {
  Suite *suite = suite_create("Main");
  TCase *tc_abs = tcase_create("abs");  // +
  TCase *tc_acos = tcase_create("acos");
  TCase *tc_asin = tcase_create("asin");
  TCase *tc_atan = tcase_create("atan");
  TCase *tc_ceil = tcase_create("ceil");  // +
  TCase *tc_cos = tcase_create("cos");    // +
  TCase *tc_exp = tcase_create("exp");    // +

  TCase *tc_fabs = tcase_create("fabs");    // +
  TCase *tc_floor = tcase_create("floor");  // +
  TCase *tc_fmod = tcase_create("fmod");    // +
  TCase *tc_log = tcase_create("log");      // +
  TCase *tc_pow = tcase_create("pow");      // +
  TCase *tc_sin = tcase_create("sin");      // +
  TCase *tc_sqrt = tcase_create("sqrt");    // +
  TCase *tc_tan = tcase_create("tan");

  suite_add_tcase(suite, tc_abs);
  suite_add_tcase(suite, tc_acos);
  suite_add_tcase(suite, tc_asin);
  suite_add_tcase(suite, tc_atan);
  suite_add_tcase(suite, tc_ceil);
  suite_add_tcase(suite, tc_cos);
  suite_add_tcase(suite, tc_exp);

  suite_add_tcase(suite, tc_fabs);
  suite_add_tcase(suite, tc_floor);
  suite_add_tcase(suite, tc_fmod);
  suite_add_tcase(suite, tc_log);
  suite_add_tcase(suite, tc_pow);
  suite_add_tcase(suite, tc_sin);
  suite_add_tcase(suite, tc_sqrt);
  suite_add_tcase(suite, tc_tan);

  tcase_add_test(tc_abs, abs_test_1);
  tcase_add_test(tc_abs, abs_test_2);
  tcase_add_test(tc_abs, abs_test_3);
  tcase_add_test(tc_abs, abs_test_4);
  tcase_add_test(tc_abs, abs_test_5);
  tcase_add_test(tc_abs, abs_test_6);
  tcase_add_test(tc_abs, abs_test_7);
  tcase_add_test(tc_abs, abs_test_8);

  tcase_add_test(tc_acos, acos_test_1);
  tcase_add_test(tc_acos, acos_test_2);
  tcase_add_test(tc_acos, acos_test_3);
  tcase_add_test(tc_acos, acos_test_4);
  tcase_add_test(tc_acos, acos_test_5);
  tcase_add_test(tc_acos, acos_test_6);
  tcase_add_test(tc_acos, acos_test_7);
  tcase_add_test(tc_acos, acos_test_8);

  tcase_add_test(tc_asin, asin_test_1);
  tcase_add_test(tc_asin, asin_test_2);
  tcase_add_test(tc_asin, asin_test_3);
  tcase_add_test(tc_asin, asin_test_4);
  tcase_add_test(tc_asin, asin_test_5);
  tcase_add_test(tc_asin, asin_test_6);
  tcase_add_test(tc_asin, asin_test_7);

  tcase_add_test(tc_atan, atan_test_1);
  tcase_add_test(tc_atan, atan_test_2);
  tcase_add_test(tc_atan, atan_test_3);
  tcase_add_test(tc_atan, atan_test_4);
  tcase_add_test(tc_atan, atan_test_5);
  tcase_add_test(tc_atan, atan_test_6);
  tcase_add_test(tc_atan, atan_test_7);
  tcase_add_test(tc_atan, atan_test_8);
  tcase_add_test(tc_atan, atan_test_9);
  tcase_add_test(tc_atan, atan_test_10);
  tcase_add_test(tc_atan, atan_test_11);
  tcase_add_test(tc_atan, atan_test_12);
  tcase_add_test(tc_atan, atan_test_13);
  tcase_add_test(tc_atan, atan_test_14);
  tcase_add_test(tc_atan, atan_test_15);
  tcase_add_test(tc_atan, atan_test_16);

  tcase_add_test(tc_ceil, ceil_test_1);
  tcase_add_test(tc_ceil, ceil_test_2);
  tcase_add_test(tc_ceil, ceil_test_3);
  tcase_add_test(tc_ceil, ceil_test_4);
  tcase_add_test(tc_ceil, ceil_test_5);
  tcase_add_test(tc_ceil, ceil_test_6);

  tcase_add_test(tc_cos, cos_test_1);
  tcase_add_test(tc_cos, cos_test_2);
  tcase_add_test(tc_cos, cos_test_3);
  tcase_add_test(tc_cos, cos_test_4);
  tcase_add_test(tc_cos, cos_test_5);
  tcase_add_test(tc_cos, cos_test_6);
  tcase_add_test(tc_cos, cos_test_7);

  tcase_add_test(tc_exp, exp_test_1);
  tcase_add_test(tc_exp, exp_test_2);
  tcase_add_test(tc_exp, exp_test_3);
  tcase_add_test(tc_exp, exp_test_4);
  tcase_add_test(tc_exp, exp_test_5);
  tcase_add_test(tc_exp, exp_test_6);
  tcase_add_test(tc_exp, exp_test_7);
  tcase_add_test(tc_exp, exp_test_8);
  tcase_add_test(tc_exp, exp_test_10);
  tcase_add_test(tc_exp, exp_test_11);
  tcase_add_test(tc_exp, exp_test_12);
  tcase_add_test(tc_exp, exp_test_15);
  tcase_add_test(tc_exp, exp_test_16);
  tcase_add_test(tc_exp, exp_test_17);
  tcase_add_test(tc_exp, exp_test_18);
  tcase_add_test(tc_exp, exp_test_19);
  tcase_add_test(tc_exp, exp_test_20);
  tcase_add_test(tc_exp, exp_test_21);

  tcase_add_test(tc_fabs, fabs_test_1);
  tcase_add_test(tc_fabs, fabs_test_2);
  tcase_add_test(tc_fabs, fabs_test_3);
  tcase_add_test(tc_fabs, fabs_test_4);
  tcase_add_test(tc_fabs, fabs_test_5);

  tcase_add_test(tc_floor, floor_test_1);
  tcase_add_test(tc_floor, floor_test_2);
  tcase_add_test(tc_floor, floor_test_3);
  tcase_add_test(tc_floor, floor_test_4);
  tcase_add_test(tc_floor, floor_test_5);
  tcase_add_test(tc_floor, floor_test_6);
  tcase_add_test(tc_floor, floor_test_7);

  tcase_add_test(tc_fmod, fmod_test_1);
  tcase_add_test(tc_fmod, fmod_test_2);
  tcase_add_test(tc_fmod, fmod_test_3);
  tcase_add_test(tc_fmod, fmod_test_4);
  tcase_add_test(tc_fmod, fmod_test_5);
  tcase_add_test(tc_fmod, fmod_test_6);
  tcase_add_test(tc_fmod, fmod_test_7);
  tcase_add_test(tc_fmod, fmod_test_8);
  tcase_add_test(tc_fmod, fmod_test_9);

  tcase_add_test(tc_log, log_test_1);
  tcase_add_test(tc_log, log_test_2);
  tcase_add_test(tc_log, log_test_3);
  tcase_add_test(tc_log, log_test_4);
  tcase_add_test(tc_log, log_test_5);
  tcase_add_test(tc_log, log_test_6);
  tcase_add_test(tc_log, log_test_7);
  tcase_add_test(tc_log, log_test_8);
  //

  tcase_add_test(tc_pow, pow_test_1);
  tcase_add_test(tc_pow, pow_test_2);
  tcase_add_test(tc_pow, pow_test_3);
  tcase_add_test(tc_pow, pow_test_4);
  tcase_add_test(tc_pow, pow_test_5);
  tcase_add_test(tc_pow, pow_test_6);
  tcase_add_test(tc_pow, pow_test_7);
  tcase_add_test(tc_pow, pow_test_8);
  tcase_add_test(tc_pow, pow_test_9);
  tcase_add_test(tc_pow, pow_test_10);
  tcase_add_test(tc_pow, pow_test_11);
  tcase_add_test(tc_pow, pow_test_12);
  tcase_add_test(tc_pow, pow_test_13);
  tcase_add_test(tc_pow, pow_test_14);
  tcase_add_test(tc_pow, pow_test_15);
  tcase_add_test(tc_pow, pow_test_16);
  tcase_add_test(tc_pow, pow_test_17);

  tcase_add_test(tc_sin, sin_test_1);
  tcase_add_test(tc_sin, sin_test_2);
  tcase_add_test(tc_sin, sin_test_3);
  tcase_add_test(tc_sin, sin_test_4);
  tcase_add_test(tc_sin, sin_test_5);
  tcase_add_test(tc_sin, sin_test_6);
  tcase_add_test(tc_sin, sin_test_7);
  tcase_add_test(tc_sin, sin_test_8);

  tcase_add_test(tc_sqrt, sqrt_test_1);
  tcase_add_test(tc_sqrt, sqrt_test_2);
  tcase_add_test(tc_sqrt, sqrt_test_3);
  tcase_add_test(tc_sqrt, sqrt_test_4);
  tcase_add_test(tc_sqrt, sqrt_test_5);
  tcase_add_test(tc_sqrt, sqrt_test_6);
  tcase_add_test(tc_sqrt, sqrt_test_7);

  tcase_add_test(tc_tan, tan_test_1);
  tcase_add_test(tc_tan, tan_test_2);
  tcase_add_test(tc_tan, tan_test_3);
  tcase_add_test(tc_tan, tan_test_4);
  tcase_add_test(tc_tan, tan_test_5);
  return suite;
}

int main() {
  Suite *suite = main_suite();
  int fails = 0;

  SRunner *runner;
  runner = srunner_create(suite);
  srunner_set_fork_status(runner, CK_NOFORK);
  srunner_run_all(runner, CK_NORMAL);

  fails = srunner_ntests_failed(runner);
  srunner_free(runner);

  return (fails == 0) ? 0 : 1;
}
