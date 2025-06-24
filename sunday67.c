#include<stdio.h>
int main()
{
	int n;
	printf("Enter any natural number:");
	scanf("%i",&n);
	switch(n%2)
	{
		case 0:
			printf("Even number");
			break;
		case 1:
			printf("Odd number");
	}
	return 0;
}
