#include<stdio.h>
int main()
{
	int a[3][5]={{10,20,30,40,50},{11,22,33,44,55},
								{11,12,13,14,15}};
	int i,j;
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<5;j++)
			printf("%5i",a[i][j]);
		printf("\n\n");
	}
	
	return 0;
}
