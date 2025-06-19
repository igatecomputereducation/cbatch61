#include<stdio.h>
int main()
{
	int sal,sales;
	float comm,allow,gross;
	printf("Your salary:");
	scanf("%i",&sal);
	printf("Sales:");
	scanf("%i",&sales);
	comm=sales*3.0/100;
	allow=sales*2.0/100;
	gross=sal+comm+allow;
	printf("-------------------------\n");
	printf("Salary      %i\n",sal);
	printf("Commission  %.2f\n",comm);
	printf("Allowences  %.2f\n",allow);
	printf("Gross       %.2f",gross);
	return 0;
}



