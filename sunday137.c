#include<stdio.h>
int main()
{
	int n,t,i,fact,sum;
	
	printf("Enter any natural number:");
	scanf("%i",&n);
	
	t=n;
	
	for(sum=0;t!=0;t=t/10)
	{
		for(fact=1,i=1;i<=t%10;i++)
			fact=fact*i;
		sum=sum+fact;	
	}
	
	if(sum==n)
		printf("Strong number");
	else
		printf("Not a strong number");
	
	return 0;
}
