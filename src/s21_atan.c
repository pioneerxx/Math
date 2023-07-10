#include "s21_math.h"

long double s21_atan(double x) {
  long double res;
  if (x < 1.0 && x > -1.0) {
    res = x;
    long double atan = x, n = 1;
    while (s21_fabs(atan) > S21_EPS) {
      atan = -1 * atan * x * x * (2 * n - 1) / (2 * n + 1);
      n += 1;
      res += atan;
    }
  } else if (x == 1.0) {
    res = S21_PI / 4;
  } else if (x == -1.0) {
    res = -S21_PI / 4;
  } else if (x == 0) {
    res = 0;
  } else if (x > 1.0) {
    long double a = 1 / x;
    long double atan = 1 / x, n = 1;
    while (s21_fabs(atan) > S21_EPS) {
      atan = -1 * atan * 1 / x * 1 / x * (2 * n - 1) / (2 * n + 1);
      n += 1;
      a += atan;
    }
    res = S21_PI / 2 - a;
  } else if (x < -1.0) {
    long double a = 1 / x;
    long double atan = 1 / x, n = 1;
    while (s21_fabs(atan) > S21_EPS) {
      atan = -1 * atan * 1 / x * 1 / x * (2 * n - 1) / (2 * n + 1);
      n += 1;
      a += atan;
    }
    res = -S21_PI / 2 - a;
  } else if (x != x) {
    res = S21_NAN;
  }
  return res;
}