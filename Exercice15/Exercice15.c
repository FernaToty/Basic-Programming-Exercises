//15. Write a program that asks for seconds and convert it into minutes, hours and days.

#include <stdio.h>

int main()
{
	float seconds = 0.0f;
	float minutes = 0.0f;
	float hours = 0.0f;
	float days = 0.0f;

	printf("Enter the time in seconds: ");
	scanf_s("%f", &seconds);

	minutes = seconds / 60.0f;
	hours = minutes / 60.0f;
	days = hours / 24.0f;

	printf("The time in minutes will be: %f\n", minutes);
	printf("The time in hours will be: %f\n", hours);
	printf("The time in days will be: %f\n", days);
	
	return 0;

}


