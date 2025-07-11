#include<stdio.h>
int main()
{
	int age;
	printf("Enter the age:");
	scanf("%i",&age);
	if(age>=60)
		printf("Senior Adult");
	else if(age>=40)
		printf("Middle Age Adult");
	else if(age>=20)
		printf("Young Adult");
	else if(age>=13)
		printf("Teenage");
	else if(age>=5)
		printf("Child");
	else if(age>=2)
		printf("Toddler");
	else
		printf("Infant");
	return 0;
}
