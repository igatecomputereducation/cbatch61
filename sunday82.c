#include<stdio.h>
int main()
{
	int i,n;
	printf("Enter the limit:");
	scanf("%i",&n);
	
	i=n;
	while(i>=1)
	{
		printf("%i\n",i);
		i--;
	}
	
	return 0;
}
