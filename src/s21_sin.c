#include "s21_math.h"

long double s21_sin(double x) {
  int sign = (x < 0) ? -1 : 1;
  x = s21_fmod(s21_fabs(x), 2 * S21_PI);
  if (x > S21_PI) {
    x -= S21_PI;
    sign *= -1;
  }
  if (x > S21_PI / 2) {
    x = S21_PI - x;
  }
  long double res = x;
  long double num = x;
  long double step = 1;
  int flash = -1;
  step = num * num * num / 6;
  res += flash * step;
  flash *= -1;
  if (x == S21_INF || x == -S21_INF || S21_ISNAN(x)) {
    res = S21_NAN;
  } else {
    for (int n = 5; s21_fabs(step) > S21_EPS; n += 2) {
      step *= num * num / (n * (n - 1));
      res += flash * step;
      flash *= -1;
    }
  }
  return sign * res;
}
