#include "s21_math.h"

long double s21_sqrt(double x) {
  long double res = 0;
  if (x < 0 || S21_ISNAN(x)) {
    res = S21_NAN;
  } else if (x == S21_INF) {
    res = S21_INF;
  } else {
    res = s21_exp(0.5 * s21_log(x));
  }
  return res;
}