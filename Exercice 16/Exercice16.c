//16. Write a program that computes your final mark given several marks:
//30% partial exam
//40% 4 class exercises (10% each)
// 30% final

#include <stdio.h>

int main()
{
	float partialExam = 0.0f;
	float ClassExercise01 = 0.0f;
	float ClassExercise02 = 0.0f;
	float ClassExercise03 = 0.0f;
	float ClassExercise04 = 0.0f;
	float finalExam = 0.0f;
	float finalMark = 0.0f;


	printf("Introduce your partial exam mark: ");
	scanf_s("%f", &partialExam);

	printf("Introduce your Class exercice mark 1: ");
	scanf_s("%f", &ClassExercise01);

	printf("Introduce your Class exercice mark 2: ");
	scanf_s("%f", &ClassExercise02);

	printf("Introduce your Class exercice mark 3: ");
	scanf_s("%f", &ClassExercise03);

	printf("Introduce your Class exercice mark 4: ");
	scanf_s("%f", &ClassExercise04);

	printf("Introduce your final exam mark: ");
	scanf_s("%f", &finalExam);

	finalMark = (((partialExam * 0.30) + (ClassExercise01 * 0.10 + ClassExercise02 * 0.10 + ClassExercise03 * 0.10 + ClassExercise04 * 0.10) + (finalExam * 0.40)));

	printf("Your final mark will be: %f", finalMark);

	return 0;



	
}


