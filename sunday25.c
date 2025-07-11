#include<stdio.h>
int main()
{
	int a,b;
	printf("First number:");
	scanf("%i",&a);
	printf("Second number:");
	scanf("%i",&b);
	if(a==b)
		printf("Equals");
	if(a!=b)
		printf("Not equals");
	return 0;
}
