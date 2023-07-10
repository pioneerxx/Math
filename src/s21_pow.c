#include "s21_math.h"

long double s21_pow(double base, double exp) {
  long double res = 0;
  if (base == 1 || exp == 0) {
    res = 1;
  } else if (S21_ISNAN(base) || S21_ISNAN(exp)) {
    res = S21_NAN;
  } else if (exp == -S21_INF && base == 0) {
    res = S21_INF;
  } else if (exp == -S21_INF || base == 0) {
    res = 0;
  } else if (exp == S21_INF) {
    res = S21_INF;
  } else if (base == S21_INF) {
    res = base;
  } else if (base == -S21_INF) {
    if (s21_fmod(exp, 2) == 0) {
      res = S21_INF;
    } else {
      res = -S21_INF;
    }
  } else if (base < 0) {
    if (s21_fabs(exp - (int)exp) > 0.0000000001) {
      res = S21_NAN;
    } else {
      base = -base;
      int flag = exp < 0;
      if (exp < 0) exp = -exp;
      res = s21_exp(exp * s21_log(base));
      if (s21_fmod(exp, 2) != 0) {
        res = -res;
      }
      if (flag) res = 1. / res;
    }
  } else {
    res = s21_exp(exp * s21_log(base));
  }
  return res;
}
