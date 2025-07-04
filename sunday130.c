#include<stdio.h>
int main()
{
	int i,j;
	
	for(j=5;j>=1;j--)
	{
		for(i=1;i<=5-j;i++)
			printf("     ");
		for(i=1;i<=j;i++)
			printf("%5i",i);
	
		printf("\n\n");
	}
	
	return 0;
}
