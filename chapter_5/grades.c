/*use a switch statement to write a program that converts a numerical grade to a letter grade
 * break the grade into two digits, then use a switch statement to test the ten's digit*/
#include <stdio.h>

int main()
{
	int grade,c;

	printf("Enter numerical grade: ");
	scanf("%d", &grade);
	c = grade / 10;

	switch (c)
	{
	case 10:case 9:
		printf("A");break;
	case 8:
		printf("B");break;
	case 7:
		printf("C");break;
	case 6:
		printf("D");break;
	case 5:case 4:case 3:case 2:case 1:case 0:
		printf("F");break;
	default:
		printf("Invalid grade\n");break;
	}

	//printf("%d\n%d\n", grade, c);
	return 0;
}


