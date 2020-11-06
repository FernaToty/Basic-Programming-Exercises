
//Compute the number of pulses that a person has depending on age
#include <stdio.h>

int main()
{

	float age = 0.0f; 
	float pulse = 0.0f; 

	printf("Enter the age: ");
	scanf_s("%f", &age);
	getchar();
	
	pulse = (220 - age) / 10;

	printf("Pulso total: %f\n", pulse);  

	return 0;
}

		
	
