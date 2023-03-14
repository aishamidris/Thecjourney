#include <stdio.h>
//This code converts celcius to farenheit


int main(void)
{
	float celcius = 0;

	printf("enter celcius value: ");
	scanf("%f", &celcius);
	
	float farenheit = (celcius * 1.8) + 32;
	
	printf( "farenheit value: %f\n", farenheit);
	return 0;
}
