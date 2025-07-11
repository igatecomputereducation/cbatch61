#include<stdio.h>
int main()
{
	char gen;
	int age;
	printf("Gender m/f:");
	scanf("%c",&gen);
	printf("Age:");
	scanf("%i",&age);
	if(gen=='f' && age>=18 || gen=='m' && age>=21)
		printf("Major");
	else
		printf("Minor");
	return 0;
}
