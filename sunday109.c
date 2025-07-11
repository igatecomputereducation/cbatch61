#include<stdio.h>
int main()
{
	int n,max;
	printf("Enter any natural number:");
	scanf("%i",&n);
	for(max=n%10;n!=0;n=n/10)
	{
		if(n%10>max)
			max=n%10;
	}
	printf("Maximum digit %i",max);
	return 0;
}
