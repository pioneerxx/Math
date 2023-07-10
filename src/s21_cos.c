#include "s21_math.h"

long double s21_cos(double x) {
  x = x - (int)(x / 2 / S21_PI) * 2 * S21_PI;
  long double res = 1;
  long double num = x;
  long double step = 1;
  int flash = -1;
  if (x == S21_INF || x == -S21_INF || S21_ISNAN(x)) {
    res = S21_NAN;
  } else {
    for (int n = 2; s21_fabs(step) > S21_EPS; n += 2) {
      step *= num * num / (n * (n - 1));
      res += flash * step;
      flash *= -1;
    }
  }
  return res;
}