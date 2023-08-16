#include <stdio.h>

int main()
{
	int a,b,c,gcd;

	printf("Enter two integers: ");
	scanf("%d%d", &a,&b);

	while (a != 0)
	{
		int temp = a;
		
		a = b % a;
	
		b = temp;
	}

		printf("GCD is %d\n", b); 

	
	return 0;
}

