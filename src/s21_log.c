#include "s21_math.h"

long double s21_log(double x) {
  long double res = 0;
  if (x == S21_INF) {
    res = x;
  } else if (x == 0) {
    res = -S21_INF;
  } else if (x < 0) {
    res = S21_NAN;
  } else {
    int epow = 0;
    long double buff;
    for (; x >= S21_EXP; x /= S21_EXP, epow++) continue;
    for (int i = 0; i < 100; i++) {
      buff = res;
      res = buff + 2 * (x - s21_exp(buff)) / (x + s21_exp(buff));
    }
    res = (long double)res + epow;
  }
  return res;
}
