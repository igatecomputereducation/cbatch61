#include<stdio.h>
int main()
{
	int i,ll,ul;
	printf("Lower limit:");
	scanf("%i",&ll);
	printf("Upper limit:");
	scanf("%i",&ul);
	for(i=ll;i<=ul;i++)
	{
		printf("%i\n",i);
	}
	return 0;
}
