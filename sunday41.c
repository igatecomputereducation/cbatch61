#include<stdio.h>
int main()
{
	int sal;
	float hra,da,gross;
	printf("Salary:");
	scanf("%i",&sal);
	if(sal>=50000)
	{
		hra=sal*17.0/100;
		da=sal*19.0/100;
	}
	else
	{
		hra=sal*13.0/100;
		da=sal*15.0/100;
	}
	gross=sal+hra+da;
	printf("House Rent Allowences %.2f\n",hra);
	printf("Dearness Allowences %.2f\n",da);
	printf("Gross salary %.2f",gross);
	return 0;
}
