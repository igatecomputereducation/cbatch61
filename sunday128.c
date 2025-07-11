#include<stdio.h>
int main()
{
	int i,j;
	for(j=1;j<=5;j++)
	{
		for(i=1;i<=j;i++)
			printf("%5i",j);
		printf("\n\n");
	}
	for(j=4;j>=1;j--)
	{
		for(i=1;i<=j;i++)
			printf("%5i",j);
		printf("\n\n");
	}
	return 0;
}
