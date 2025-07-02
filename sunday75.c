#include<stdio.h>
int main()
{
	int x,n;
	
	printf("Enter the limit:");
	scanf("%i",&n);
	
	x=1;
	kalki:
		printf("%i\n",x);
		x=x+1;
	if(x<=n)	
		goto kalki;
		
	return 0;
}
