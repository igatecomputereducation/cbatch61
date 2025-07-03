#include<stdio.h>
int main()
{
	int i,j;
	
	for(j=1;j<=5;j++)
	{
		for(i=j;i>=1;i--)
			printf("%5i",i);
		printf("\n\n");
	}
	
	return 0;
}
