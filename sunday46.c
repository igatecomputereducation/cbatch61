#include<stdio.h>
int main()
{
	char gen;
	int age;
	printf("Gender m/f:");
	scanf("%c",&gen);
	printf("Age:");
	scanf("%i",&age);
	if(gen=='m')
	{
		if(age>=21)
			printf("Major");
		else
			printf("Minor");
	}
	else
	{
		if(age>=18)
			printf("Major");
		else
			printf("Minor");
	}
	return 0;
}
