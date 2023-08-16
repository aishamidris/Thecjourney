/* Calculates a broker's commission*/ 

#include <stdio.h> 
#define V num_s * pps

int main(void) 
{
	float num_s,commission,pps,rival;
	while (1)
	{


	printf("Enter number of shares: ");
	scanf("%f", &num_s);
	printf("Enter price per share: ");
	scanf("%f", &pps);

	{
		if (num_s == 0)
		{
		break;}
		if (pps == 0)
		{ break;}


	if (V < 2000)
		rival = 33.00f + 0.03f * V;
	else if (V >= 2000)
		rival = 33.00f + 0.02f * V;
	printf("Rival commission: $%.2f\n", rival);

	
	if (V < 2500.00f)
		commission= 30.00f + .017f * V;
	else if (V< 6250.00f)
		commission = 56.00f + .0066f * V;
	else if (V< 20000.00f)
		commission= 76.00f + .0034f * V;
	else if (V< 50000.00f)
		commission= 100.00f + .0022f * V;
	else if (V< 500000.00f)
		commission = 155.00f + .0011f * V;
	else
		commission = 255.00f + .0009f * V;
	if (commission< 39.00f)
		commission= 39.00f;
	}
	}
	printf("Commission: $%.2f\n", commission); 
	return 0;
}
