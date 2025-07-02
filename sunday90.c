#include<stdio.h>
int main()
{
	int n,sum;
	printf("Enter any natural number:");
	scanf("%i",&n);
	sum=0;
	while(n!=0)
	{
		sum=sum+n%10;
		n=n/10;
	}
	printf("Sum of all the digits %i",sum);
	return 0;
}
