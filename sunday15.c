#include<stdio.h>
int main()
{
	float hei,wei,bmi;
	printf("Your weight in kgs:");
	scanf("%f",&wei);
	printf("Your height in feets:");
	scanf("%f",&hei);
	hei=hei*0.3048;
	bmi=wei/(hei*hei);
	printf("Your body mass index %f",bmi);
	return 0;
}
