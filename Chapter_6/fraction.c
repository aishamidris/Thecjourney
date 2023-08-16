#include <stdio.h>

int main()
{
	int a, b, c,d,x,y;

	printf("Enter a fraction: ");
	scanf("%d/%d", &a, &b);
	x = a;
	y = b;

	while (a != 0)
	{
		d = a;
		a = b % a;
		b = d;
	}
	x = x / b;
	y = y / b;
	printf("lowest term is %d/%d\n", x,y);

	return 0;
}


		
