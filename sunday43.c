#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter 3 integers..\n");
	scanf("%i%i%i",&a,&b,&c);
	if(a==b)
	{
		if(b==c)
			printf("Equals");
		else
			printf("Not equals");
	}
	else
		printf("Not equals");
	return 0;
}
