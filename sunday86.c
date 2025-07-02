#include<stdio.h>
int main()
{
	int i,n,sum;
	printf("Enter the limit:");
	scanf("%i",&n);
	sum=0;
	i=1;
	while(i<=n)
	{
		sum=sum+i;
		i++;	
	}
	printf("Sum of natural numbers %i",sum);
	return 0;
}
