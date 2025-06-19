#include<stdio.h>
int main()
{
	int year;
	printf("Enter any year:");
	scanf("%i",&year);
	if(year%100==0 && year%400==0 || year%100!=0 && year%4==0)
		printf("Leap year");
	else
		printf("Not a leap year");
	return 0;
}
