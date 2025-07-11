#include<stdio.h>
int main()
{
	int mat,phy,che,tot;
	float avg;
	printf("Mathematics:");
	scanf("%i",&mat);
	printf("Physics:");
	scanf("%i",&phy);
	printf("Chemistry:");
	scanf("%i",&che);
	tot=mat+phy+che;
	avg=tot/3.0;
	printf("Total marks %i\n",tot);
	printf("Average marks %f",avg);
	return 0;
}
