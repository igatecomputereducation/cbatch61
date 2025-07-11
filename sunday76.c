#include<stdio.h>
int main()
{
	int x,n;
	
	printf("Enter the limit:");
	scanf("%i",&n);
	
	x=n;
	kalki:
		printf("%i\n",x);
		x=x-1;
	if(x>=1)	
		goto kalki;
		
	return 0;
}
