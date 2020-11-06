//This program asks the temperature in celsius and converts in kelvin.

#include <stdio.h>

int main()
{

	float temperatureCelsius = 0f;
	float temperatureFarenheit = 0f;

	printf("Introduce temperature in celsius: ");
	scanf_s("%f", &temperatureCelsius);
	getchar();

	temperatureFarenheit = ((temperatureCelsius * 9) / 5) - 32;

	printf("Temperature in Farenheit will be: %f\n", temperatureFarenheit);

	return 0;
}