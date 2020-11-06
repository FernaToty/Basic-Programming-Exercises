

#include <stdio.h>

int main()
{

	int num01 = 0;
	int num02 = 0;

	printf("introduce one number: ");
	scanf("%i", &num01);
	getchar();

	printf("introduce one number: ");
	scanf("%i", &num02);
	getchar();

	printf("The sum of %i + %i is %i\n", num01, num02, num01 + num02);

	return 0;
}

