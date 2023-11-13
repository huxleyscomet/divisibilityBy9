#include <stdio.h>
#include <math.h>
int main() {

	int number, dividend;
	dividend = 0;
	printf("Please enter the number> ");
	scanf_s("%d", &number);
	for (int i = 0; i <= log10(number); i++) {
		dividend += ((number % ((int)(pow(10, i + 1)))) / (int)pow(10, i));
	}
	if (fmod(dividend, 9) == 0) {
		printf("\nThe number is divisible by 9.");
	}
	else {
		printf("\nThe number is indivisible by 9.");
	}
}
