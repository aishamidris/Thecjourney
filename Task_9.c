#include <stdio.h>
//this coe prints date of birth entered by the user in a certain format


int main(void)
{
	int mm = 0;
	int dd = 0;
	int yyyy = 0;

	printf("enter a date (mm/dd/yyyy): ");
	scanf("%d/%d/%d", &mm, &dd, &yyyy);
	printf("you entered the date: %d%d%d\n", mm, dd, yyyy);
	return 0;


}
