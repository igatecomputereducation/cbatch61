#include<stdio.h>
int main()
{
	
	int i,n,flag;
	
	printf("Enter any natural number:");
	scanf("%i",&n);
	
	flag=1;
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			flag=0;
			break;	
		}
	}
	
	if(flag && n>1)
		printf("prime number");
	else
		printf("Not a prime number");
		
	return 0;
}
