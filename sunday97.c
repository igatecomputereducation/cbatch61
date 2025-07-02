#include<stdio.h>
int main()
{
	int i,n,esum,osum;
	printf("Enter the limit:");
	scanf("%i",&n);
	for(esum=0,osum=0,i=1;i<=n;i++)
	{
		if(i%2==0)
			esum=esum+i;
		else
			osum=osum+i;
	}
	printf("Even numbers sum %i\n",esum);
	printf("Odd numbers sum %i",osum);
	return 0;
}
