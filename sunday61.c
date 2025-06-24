#include<stdio.h>
int main()
{
	float wei,hei,bmi;
	printf("Weight in Kgs:");
	scanf("%f",&wei);
	printf("Height in feets:");
	scanf("%f",&hei);
	hei=hei*0.3048;
	bmi=wei/(hei*hei);
	printf("Your body mass index %f\n",bmi);
	if(bmi>=30)
		printf("Obiss");
	else if(bmi>=25)
		printf("Over weight");
	else if(bmi>=18.5)
		printf("Normal weight");
	else
		printf("Under weight");
	return 0;
}
