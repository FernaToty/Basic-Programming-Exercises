

#include <stdio.h>

int main()
{

	int width = 0;
	int height = 0;
	int area = 0;
	int perimeter = 0;

	printf("introduce rectangle width: ");
	scanf_s("%i", &width);

	printf("introduce rectangle height: ");
	scanf_s("%i", &height);

	area = width * height;
	perimeter = 2 * width + 2 * height;

	printf("Rectangle area: %i\n", area");
	printf("Rectangle perimetre: %i\n", perimeter");

	return 0;
}

