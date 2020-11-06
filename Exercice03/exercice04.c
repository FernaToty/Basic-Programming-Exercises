

#include <stdio.h>
int main()
{

	float num01 = 0;
	float num02 = 0;
	float mean = 0;

	printf("introduce one number: ");
	scanf_s("%f", &num01);

	printf("introduce one number: ");
	scanf_s("%f", &num02);

	mean = (num01 + num02) / 2.0f;

	printf("The sum of %f + %f is %f\n", num01, num02, mean);

	return 0;
}