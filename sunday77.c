#include<stdio.h>
int main()
{
	int x,ll,ul;
	
	printf("Lower limit:");
	scanf("%i",&ll);
	printf("Upper limit:");
	scanf("%i",&ul);
	
	x=ll;
	kalki:
		printf("%i\n",x);
		x=x+1;
	if(x<=ul)
		goto kalki;
	
	return 0;
}
