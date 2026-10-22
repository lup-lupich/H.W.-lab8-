#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_CTYPE, "RUS");

	int n, end;
	double res = 0;

	printf("Введите число n: ");
	scanf("%d", &n);

	end = 2 * n + 1;

	for (int i = 3; i <= end; i += 2) {
		res += 1.0 / (i * i);
	}

	printf("Результат: %lf\n", res);

	return 0;
}