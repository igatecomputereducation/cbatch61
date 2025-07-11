#include<stdio.h>
int main()
{
	int n,count;
	printf("Enter any natural number:");
	scanf("%i",&n);
	for(count=0;n!=0;n=n/10)
	{
		count++;
	}
	printf("Number of digits %i",count);
	return 0;
}
