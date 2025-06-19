#include<stdio.h>
int main()
{
	int sal;
	float hra,da,gross;
	printf("Enter the salary:");
	scanf("%i",&sal);
	hra=sal*12.0/100;
	da=sal*15.0/100;
	gross=sal+hra+da;
	printf("-----------------------------\n");
	printf("Salary                %i\n",sal);
	printf("House Rent Allowence  %.2f\n",hra);
	printf("Dearness Allowence    %.2f\n",da);
	printf("Gross salary          %.2f",gross);
	return 0;
}
