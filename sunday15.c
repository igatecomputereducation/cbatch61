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
	printf("Your body mass index %f\n",bmi);
	if(bmi>30)
		printf("Obesity");
	else if(bmi>=25)
		printf("Over weight");
	else if(bmi>=18.5)
		printf("Normal weight");
	else
		printf("under weight");
	return 0;
}
