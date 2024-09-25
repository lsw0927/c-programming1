#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double num1, num2;
	printf("Please enter kilometers: ");
	scanf("%lf", &num1);
	num2 = num1 / 1.609;
	printf("%.1f km is equal to %.1f miles.", num1, num2);
}