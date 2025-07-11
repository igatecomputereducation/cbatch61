#include<stdio.h>
#include<math.h>
int main()
{
	int base,exp,res;
	printf("Base:");
	scanf("%i",&base);
	printf("Exponent:");
	scanf("%i",&exp);
	res=pow(base,exp);
	printf("Result %i",res);
	return 0;
}
