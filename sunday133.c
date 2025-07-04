#include<stdio.h>
int main()
{
	int i,j;
	for(j=1;j<=5;j++)
	{
		for(i=1;i<=5-j;i++)
			printf("     ");
		for(i=1;i<=j;i++)
			printf("  *  ");
		for(i=1;i<=j-1;i++)
			printf("  *  ");
		printf("\n\n");
	}
	for(j=4;j>=1;j--)
	{
		for(i=1;i<=5-j;i++)
			printf("     ");
		for(i=1;i<=j;i++)
			printf("  *  ");
		for(i=1;i<=j-1;i++)
			printf("  *  ");
		printf("\n\n");
	}
	return 0;
}
