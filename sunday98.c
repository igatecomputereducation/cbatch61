#include<stdio.h>
int main()
{
	int n,i;
	printf("Enter any natural number:");
	scanf("%i",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
			printf("%i\n",i);
	}
	return 0;
}
