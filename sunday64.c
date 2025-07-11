#include<stdio.h>
int main()
{
	int n;
	printf("Enter any natural number:");
	scanf("%i",&n);
	(n%2==0)?printf("Even"):printf("Odd");
	return 0;
}
