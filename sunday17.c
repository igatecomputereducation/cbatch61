#include<stdio.h>
int main()
{
	float bre,hei,area;
	printf("Breadth:");
	scanf("%f",&bre);
	printf("Height:");
	scanf("%f",&hei);
	area=1.0/2*bre*hei;
	printf("Area of triangle %f",area);
	return 0;
}
