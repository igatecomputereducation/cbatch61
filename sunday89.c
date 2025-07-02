#include<stdio.h>
int main()
{
	int n,i;
	printf("Enter the limit:");
	scanf("%i",&n);
	i=1;
	while(i<=n)
	{
		if(n%i==0)
			printf("%i\n",i);
		i++;
	}
	return 0;
}
