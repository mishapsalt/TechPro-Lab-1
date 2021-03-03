#include <stdio.h>
#include <cstdio>
#include <stdlib.h>
#include <locale>
#include <stdbool.h>

void Error() {				//можно убрать
	printf("Ошибка ввода.\n");
	exit(EXIT_FAILURE);
}

int IntInput() {
	int a;
	if (scanf("%d", &a) != 1) Error();
	return a;
}

int countLocalMin(double *a, int n) {
	for (int i = 1; i < n; i++) {
		if (localmin(a[i], a[i + 1], a[i + 1 + 1])) {
			int count;
			count++;
		}
	}
	return count;
}

void ArrayInput(double *array, int n) {
	printf("Введите %d чисел массива: ", n);
	for (int i = 0; i < n; i++) {
		array[i] = IntInput();
	}
}

bool countLocalMin(double x, double b, double c) {
	if ((b < x) && (b < c)) {
		return true;
	}
	return false;
}

int main() {
	setlocale(LC_ALL, "RU");
	printf("Введите длину массива: ");
	int n = IntInput();
	if (n < 0) Error();
	double array[100];
	ArrayInput(array, n);
	int k = countLocalMin(array, n);
	printf("Результат = %d локальных минимумов.\n", k);
	system("pause");
}
