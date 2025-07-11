#include<stdio.h>
int main()
{
	int age;
	printf("Enter your age:");
	scanf("%i",&age);
	(age>=18)?printf("Right to vote"):printf("No Right to vote");
	return 0;
}
