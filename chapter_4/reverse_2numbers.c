#include <stdio.h>

int main(void)
{
	//int a = 0;

	//printf("Enter a two digit number: ");
	//scanf("%d", &a);
	//printf("the reversal is: %d", rev a);
	
	int num,r,sum=0,t;

	printf("Input a number: ");
	scanf("%d",&num);

	for(t=num;num!=0;num=num/10)
	{
		r=num % 10;
		sum=sum*10+r;
	}
	printf("The number in reverse order is : %d \n",sum);
	return 0;
}
