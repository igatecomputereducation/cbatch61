#include<stdio.h>
int main()
{
	int i,n,count,limit;
	
	printf("Enter the limit:");
	scanf("%i",&limit);
	
	for(n=1;n<=limit;n++)
	{

		for(count=0,i=1;i<=n;i++)
		{
			if(n%i==0)
				count++;
		}
		
		if(count==2)
			printf("%i\n",n);
		
	}
	return 0;
}
