#include <stdio.h>

int main(void)
{	
	float rate = 0, payment = 0, loan = 0;

	printf("enter loan amount: ");
	scanf("%f", &loan);
	printf("enter interest rate: ");
	scanf("%f", &rate);
	printf("enter monthly payment: ");
	scanf("%f", &payment);
	
	return 0;
}
