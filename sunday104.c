#include<stdio.h>
int main()
{
	int n,sum;
	printf("Enter any natural number:");
	scanf("%i",&n);
	for(sum=0;n!=0;n=n/10)
	{
		sum=sum+n%10;
	}
	printf("Sum of all the digits %i",sum);
	return 0;
}
