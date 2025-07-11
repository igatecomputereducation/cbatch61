#include<stdio.h>
int main()
{
	int n,rev,t,limit;
	
	printf("Enter the limit:");
	scanf("%i",&limit);
	
	for(n=1;n<=limit;n++)
	{
		for(t=n,rev=0;t!=0;t=t/10)
			rev=rev*10+t%10;
		
		if(rev==n)
			printf("%i\n",n);	
	}
	
	return 0;
}
