#include <stdio.h>

//this code tries different looping codes

int main()
{
        int g = 1,n, h,number;

        printf("Enter a number: ");
        scanf("%d", &number);

        for (g=1; g<=12; g++)

        {
		h=number*g;                              printf("%d * %d = %d\n",number, g, h);
	}
	return 0;
}
