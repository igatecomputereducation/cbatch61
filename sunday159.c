#include<stdio.h>
int main()
{
	
	int a[50],n,i,k,temp;
	
	printf("How many elements:");
	scanf("%i",&n);
	
	printf("Enter elements..\n");
	for(i=0;i<n;i++)
		scanf("%i",&a[i]);
	
	for(k=0;k<n-1;k++)
	{
		for(i=k+1;i<n;i++)
		{
			if(a[i]>a[k])
			{
				temp=a[i];
				a[i]=a[k];
				a[k]=temp;
			}
		}
	}
	
	printf("The result array..\n");
	for(i=0;i<n;i++)
		printf("%5i",a[i]);
	
	return 0;
}
