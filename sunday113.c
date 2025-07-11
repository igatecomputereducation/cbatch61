#include<stdio.h>
int main()
{
	int base,exp,i,res;
	printf("Base:");
	scanf("%i",&base);
	printf("Exponent:");
	scanf("%i",&exp);
	for(res=1,i=1;i<=exp;i++)
	{
		res=res*base;
	}
	printf("Result %i",res);
	return 0;
}
