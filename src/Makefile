CC = gcc
FLAGS = -Wall -Werror -Wextra -std=c11
FLAG_COV = --coverage
LIBS = -lcheck
TEST_LIBS = -lcheck -lm -lpthread

all: gcov_report

s21_math.a:
	$(CC) $(FLAGS) -c s21_abs.c s21_acos.c s21_asin.c s21_atan.c s21_ceil.c s21_cos.c s21_exp.c s21_fabs.c s21_floor.c s21_fmod.c s21_log.c s21_pow.c s21_sin.c s21_sqrt.c s21_tan.c
	ar rc s21_math.a *.o
	ranlib s21_math.a

test: s21_math.a
	$(CC) $(FLAGS) -c s21_math_test.c -o s21_math_test.o
	$(CC) s21_math_test.o s21_math.a $(TEST_LIBS) -o s21_math
	./s21_math


gcov_report: test
	$(CC) $(FLAGS) --coverage s21_math_test.c s21_abs.c s21_acos.c s21_asin.c s21_atan.c s21_ceil.c s21_cos.c s21_exp.c s21_fabs.c s21_floor.c s21_fmod.c s21_log.c s21_pow.c s21_sin.c s21_sqrt.c s21_tan.c s21_math.h s21_math.a $(TEST_LIBS) -o gcov_test
	chmod +x *
	./gcov_test
	gcov s21_*.gcda
	gcovr -b
	gcovr
	gcovr --html-details -o report.html
	open report.html

clean:
	rm -rf s21_math
	rm -rf *.o
	rm -rf *.a
	rm -rf *.gcno
	rm -rf *.gcda
	rm -rf *.gcov
	rm -rf *.info
	rm -rf *.html
	rm -rf *.css
	rm -rf test
	rm -rf gcov_test

rebuild: clean all