#include<stdio.h>
int main()
{
	int i,n,fact;
	printf("Enter any natural number:");
	scanf("%i",&n);
	fact=1;
	i=1;
	while(i<=n)
	{
		fact=fact*i;
		i++;
	}
	printf("Factorial %i",fact);
	return 0;
}
