#include "s21_math.h"

long double s21_floor(double x) {
  if (x != S21_INF && x != -S21_INF && !S21_ISNAN(x) && x - (long int)x != 0) {
    if (x < 0) {
      x = (long int)x - 1;
    } else {
      x = (long int)x;
    }
  }
  return x;
}