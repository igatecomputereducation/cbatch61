#include<stdio.h>
int main()
{
	int x;
	
	x=1;
	kalki:
		printf("%i\n",x);
		x=x+1;
	if(x<=5)	
		goto kalki;
		
	return 0;
}
