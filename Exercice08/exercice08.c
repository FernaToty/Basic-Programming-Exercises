

#include <stdio.h>

int main()
{

	float radius = 0.0f;
	float diameter = 0.0f;
	float area = 0.0f;
	float circunference = 0.0f;
	const float pi = 3.14159256f; 

	printf("Enter radius value: ");
	scanf_s("%f", &radius);
	getchar();


	diameter = radius * 2;
	circunference = 2 * radius * pi;
	area = radius * radius * pi;

	printf("Diameter: %f\n", diameter);
	printf("Circunference: %f\n", circunference);
	printf("Area: %f\n", area);

	return 0;
}
