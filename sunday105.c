#include<stdio.h>
int main()
{
	int n,rev;
	printf("Enter any natural number:");
	scanf("%i",&n);
	for(rev=0;n!=0;n=n/10)
	{
		rev=rev*10+n%10;
	}
	printf("The reverse number %i",rev);
	return 0;
}
