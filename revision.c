#include <stdio.h>

int main(void)
{
	int item_number = 0;
	int unit_price = 0;
	int purchase_date = 0;

	printf("enter item number: ");
	scanf("%d", &item_number);
	printf("enter unit price: ");
	scanf("%d", &unit_price);
	printf("enter purchase date (mm/dd/yyyy): ");
	scanf("%d", &purchase_date);

	printf("item number\tunit price\tpurchase date\n%d\t\t%d\t\t\t%d\n", item_number, unit_price, purchase_date);
	return 0;
}
