#include "s21_math.h"

long double s21_asin(double x) {
  long double res = x;
  long double step = x;
  if (x < -1 || x > 1) {
    res = S21_NAN;
  } else if (x == -1 || x == 1) {
    res = S21_PI / 2 * x;
  } else {
    for (int i = 1; s21_fabs(step) > S21_EPS; i++) {
      step *= x * x * (2 * i - 1) * (2 * i - 1) / ((2 * i + 1) * 2 * i);
      res += step;
    }
  }
  return res;
}