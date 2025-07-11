#include<stdio.h>
int main()
{
	int n,min;
	printf("Enter any natural number:");
	scanf("%i",&n);
	for(min=n%10;n!=0;n=n/10)
	{
		if(n%10<min)
			min=n%10;
	}
	printf("Minimum digit %i",min);
	return 0;
}
