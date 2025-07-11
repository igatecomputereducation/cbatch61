#include<stdio.h>
int main()
{
	int x,n;
	
	printf("Enter the limit:");
	scanf("%i",&n);
	
	x=n;
	do{
		printf("%i\n",x);
		x=x-1;
	}while(x>=1);
	
	return 0;
}
