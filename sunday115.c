#include<stdio.h>
#include<math.h>
int main()
{
	int n,temp,digs,sum;
	
	printf("Enter any natural number:");
	scanf("%i",&n);
	
	temp=n;
	for(digs=0;temp!=0;temp=temp/10)
	{
		digs++;
	}
	
	temp=n;
	for(sum=0;temp!=0;temp=temp/10)
	{
		sum=sum+pow(temp%10,digs);
	}
	
	if(n==sum)
		printf("Armstrong number");
	else
		printf("Not an armstrong number");
		
	return 0;
}
