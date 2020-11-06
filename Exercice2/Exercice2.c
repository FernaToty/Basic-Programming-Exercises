//02. Write a program that asks for 2 numbers and shows the sum.

#include <stdio.h>

int main()
{
	float number01 = 0.0;
	float number02 = 0.0;
	float sum = 0.0;

	printf("Enter The first number: ");
	scanf_s("%f", &number01);

	printf("Enter The second number: ");
	scanf_s("%f", &number02);

	sum = number01 + number02;

	printf("The sum  will be: %f\n", sum);

	return 0;
}