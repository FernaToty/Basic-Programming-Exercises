

#include <stdio.h>

int main()
{

	float angle01 = 0.0f;
	float angle02 = 0.0f;
	float angle03 = 0.0f;

	printf("Introduce angle 1: ");
	scanf_s("%f", &angle01);
	getchar();

	printf("Introduce angle 2: ");
	scanf_s("%f", &angle02);
	getchar();

	angle03 = 360 - (angle01 + angle02);

	printf("The angle03 will be: %f\n", angle03);

	return 0;
}



