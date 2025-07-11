#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter 3 integers..\n");
	scanf("%i%i%i",&a,&b,&c);
	if(a==b && b==c)
		printf("Equal");
	else
	{
		if(a>b && a>c)
			printf("Biggest number %i",a);
		else
		{
			if(b>c)
				printf("Biggest number %i",b);
			else
				printf("Biggest number %i",c);
		}
	}
	return 0;
}
