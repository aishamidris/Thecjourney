#include <stdio.h>
// a code that converts feet to meter

int main(void)
{
	double feet = 0;
	double meter = 0.304;

	printf("enter feet value: \n");
	scanf("%lf\n", &feet);
	
	double conv = feet * meter;
	printf("%lf\n", conv);
	return 0;

}
