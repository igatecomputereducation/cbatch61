#include<stdio.h>
int main()
{
	int l,b;
	printf("Length:");
	scanf("%i",&l);
	printf("Breadth:");
	scanf("%i",&b);
	if(l==b)
		printf("Square");
	if(l!=b)
		printf("Rectangle");
	return 0;
}
