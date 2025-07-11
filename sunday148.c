#include<stdio.h>
int main()
{
	int a[50],n,i,max;
	
	printf("How many elements:");
	scanf("%i",&n);
	
	printf("Enter elements..\n");
	for(i=0;i<n;i++)
		scanf("%i",&a[i]);
		
	max=a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]>max)
			max=a[i];
	}
	
	printf("Maximum element %i",max);
	return 0;
}
