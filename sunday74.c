#include<stdio.h>
int main()
{
	int x;
	
	x=5;
	kalki:
		printf("%i\n",x);
		x=x+1;
	if(x<=15)	
		goto kalki;
		
	return 0;
}
