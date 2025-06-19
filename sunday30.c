#include<stdio.h>
int main()
{
	int n;
	printf("Enter any digit 0-6:");
	scanf("%i",&n);
	if(n==0)
		printf("Sunday");
	if(n==1)
		printf("Monday");
	if(n==2)
		printf("Tuesday");
	if(n==3)
		printf("Wednesday");
	if(n==4)
		printf("Thursday");
	if(n==5)
		printf("Friday");
	if(n==6)
		printf("Saturday");
	return 0;
}
