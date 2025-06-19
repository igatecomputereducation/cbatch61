#include<stdio.h>
int main()
{
	int qty;
	float price,bill,dis,nbill;
	printf("Price of product:");
	scanf("%f",&price);
	printf("Quantity:");
	scanf("%i",&qty);
	bill=price*qty;
	dis=bill*5/100;
	nbill=bill-dis;
	printf("---------------------\n");
	printf("Total bill %.2f\n",bill);
	printf("Discount %.2f\n",dis);
	printf("Net bill %.2f",nbill);
	return 0;
}
