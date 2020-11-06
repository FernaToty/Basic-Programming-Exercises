
//This program asks for the height and the base of the triangle and calculates the area

#include <stdio.h>

int main()
{

	float base = 0.0f;
	float height = 0.0f;
	float area = 0.0f;

	printf("Enter base: ");
	scanf_s("%f", &base);
	getchar();

	printf("Enter height: ");
	scanf_s("%f", &height);
	getchar();

	area = (base * height) / 2;

	printf("The area is: %f\n", area);

	return 0;
}


