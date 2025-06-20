#include<stdio.h>
int main()
{
	int n;
	printf("Enter any integer:");
	scanf("%i",&n);
	if(n>=-9 && n<=9)
		printf("Single digit number");
	else if(n>=-99 && n<=99)
		printf("Two digit number");
	else if(n>=-999 && n<=999)
		printf("Three digit number");
	else if(n>999)
		printf("Biggest number");
	else if(n<-999)
		printf("Smallest number");
	return 0;
}
