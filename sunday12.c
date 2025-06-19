#include<stdio.h>
int main()
{
	int cmr,pmr,nu;
	float bill;
	printf("Previous month meter reading:");
	scanf("%i",&pmr);
	printf("Current month meter reading:");
	scanf("%i",&cmr);
	nu=cmr-pmr;
	bill=nu*5.75;
	printf("Number of units consumed %i\n",nu);
	printf("Total bill               %.2f",bill);
	return 0;
}
