/*Using the switch statement write a program that converts a numerical grade into a letter grade
 * A= 90-100, B = 80-89, C = 70-79, D = 60-69, F = 0-59*/

#include <stdio.h>

int main()
{
	int grade,score;
	
	printf("Enter a grade: ");
	scanf("%d", &score);

	grade = score / 10;

	switch (grade)
	{
	case 10: case 9:
	                printf("A\n");break;
	case 8:
		printf("B\n");break;
	case 7:
                printf("C\n");break;
	case 6:
                printf("D\n");break;
	case 5: case 4:case 3:case 2: case 1: case 0:
                printf("F\n");break;
	default:
                printf("Invalid score\n");break;
	}
	return 0;
}





