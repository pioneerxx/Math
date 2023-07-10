#include "s21_math.h"

long double s21_fmod(double x, double y) {
  long double res = x;
  if (x == 0 && y != 0) {
    res = 0;
  } else if ((x == S21_INF || x == -S21_INF) && !S21_ISNAN(y)) {
    res = S21_NAN;
  } else if (y == 0 && !S21_ISNAN(x)) {
    res = S21_NAN;
  } else if ((y == S21_INF || y == -S21_INF) && x != S21_INF && x != -S21_INF &&
             !S21_ISNAN(x)) {
    res = x;
  } else if (S21_ISNAN(x) || S21_ISNAN(y)) {
    res = S21_NAN;
  } else {
    res = x - ((x / y) < 0 ? s21_ceil(x / y) : s21_floor(x / y)) * y;
  }
  return res;
}