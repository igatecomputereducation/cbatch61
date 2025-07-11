#include<stdio.h>
int main()
{
	int n,rem,gr;
	printf("Enter any natural number:");
	scanf("%i",&n);
	rem=n%9;
	if(rem==0)
		gr=9;
	else
		gr=rem;
	printf("Equal single digit number %i",gr);
	return 0;
}
