#include<stdio.h>
int main()
{
	int age;
	printf("Enter your age:");
	scanf("%i",&age);
	if(age>=18)
		printf("You can vote");
	if(age<18)
		printf("Can't vote");
	return 0;
}
