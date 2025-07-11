#include<stdio.h>
int main()
{
	int n,i,sum;
	printf("Enter the limit:");
	scanf("%i",&n);
	for(sum=0,i=1;i<=n;i++)
	{
		sum=sum+i;
	}
	printf("Sum of all the digits %i",sum);
	return 0;
}
