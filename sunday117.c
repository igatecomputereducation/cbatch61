#include<stdio.h>
int main()
{
	int n,m,i,small;
	printf("First number:");
	scanf("%i",&n);
	printf("Second number:");
	scanf("%i",&m);
	small=(n<m)?n:m;
	for(i=small;i>=1;i--)
	{
		if(n%i==0 && m%i==0)
		{
			printf("GCD %i",i);
			break;
		}
	}
	return 0;
}
