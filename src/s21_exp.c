#include "s21_math.h"

long double s21_exp(double x) {
  long double res = 0;
  if (S21_ISNAN(x))
    res = S21_NAN;
  else if (x == -S21_INF) {
    res = 0;
  } else if (x == S21_INF || x > 709) {
    res = S21_INF;
  } else {
    res = 1;
    long double num = x;
    long double fact = 1;
    long double step = 1;
    while (s21_fabs(step) > S21_EPS) {
      step *= num / fact;
      res += step;
      fact++;
    }
  }
  return res;
}
