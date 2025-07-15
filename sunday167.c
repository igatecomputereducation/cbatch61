#include<stdio.h>
#include<math.h>
int main()
{
	int a[50][50],i,j,n,m,sum;
	float norm;
	
	printf("Enter the dimension of matrix..\n");
	scanf("%i%i",&n,&m);
	
	printf("Enter the matrix..\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
			scanf("%i",&a[i][j]);
	}
	
	sum=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
			sum=sum+a[i][j]*a[i][j];
	}
	
	norm=sqrt(sum);
	
	printf("Norm of matrix %f",norm);
	return 0;
}
