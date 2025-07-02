#include<stdio.h>
int main()
{
	int n,i,count;
	printf("Enter any natural number:");
	scanf("%i",&n);
	for(count=0,i=1;i<=n;i++)
	{
		if(n%i==0)
			count++;
	}
	if(count==2)
		printf("Prime number");
	else
		printf("Not a prime number");
	return 0;
}
