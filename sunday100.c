#include<stdio.h>
int main()
{
	int n,i,sum;
	printf("Enter any natural number:");
	scanf("%i",&n);
	for(sum=0,i=1;i<n;i++)
	{
		if(n%i==0)
			sum=sum+i;
	}
	if(sum==n)
		printf("Perfect number");
	else
		printf("Not a perfect number");
	return 0;
}
