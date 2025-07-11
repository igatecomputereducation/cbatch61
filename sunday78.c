#include<stdio.h>
int main()
{
	int x,n;
	
	printf("Enter the limit:");
	scanf("%i",&n);
	
	x=1;
	do{
		printf("%i\n",x);
		x=x+1;
	}while(x<=n);
	
	return 0;
}
