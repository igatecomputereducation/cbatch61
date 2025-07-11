#include<stdio.h>
int main()
{
	int n;
	printf("Enter any integer:");
	scanf("%i",&n);
	if(n>=-99)
	{
		if(n<=99)
		{
			if(n<=-10)
				printf("2 digit number");
			else
			{
				if(n>=10)
					printf("2 digit number");
				else
					printf("Not a 2 digit number");
			}
		}
		else
			printf("Not a 2 digit number");
	}
	else
		printf("Not a 2 digit number");
	return 0;
}
