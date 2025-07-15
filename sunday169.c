#include<stdio.h>
int main()
{
	int a[50][50],n,i,j,sum;
	
	printf("Enter the dimension of square matrix:");
	scanf("%i",&n);
	
	printf("Enter the matrix..\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			scanf("%i",&a[i][j]);
	}
	
	printf("Diagonal elements..\n");
	for(sum=0,i=0;i<n;i++)
	{
		printf("%5i",a[i][i]);
		sum=sum+a[i][i];
	}
	
	printf("\nTrace of matrix %i",sum);
	return 0;
}
