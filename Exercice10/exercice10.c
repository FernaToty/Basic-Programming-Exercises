
//This program asks for a value in centimeters and converts it in meters and km
#include <stdio.h>

int main()
{

	float centimeters = 0.0f;
	float meters = 0.0f;
	float kilometers = 0.0f;

	printf("Introduce distance: ");
	scanf_s("%f", &centimeters);
	getchar();

	meters = centimeters / 100;
	kilometers = centimeters / 100000;

	printf("The centimeters in meters will be: %f\n", meters);
	printf("The centimeters in kilometers will be: %f\n", kilometers);

	return 0;
}




