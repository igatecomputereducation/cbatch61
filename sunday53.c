#include<stdio.h>
int main()
{
	char gen;
	float per;
	int age;
	printf("Gender m/f:");
	scanf("%c",&gen);
	printf("Age:");
	scanf("%i",&age);
	printf("Percentage:");
	scanf("%f",&per);
	if(gen=='f' && age>=25 && age<=35 && per>=75)
		printf("selected");
	else
		printf("Not selected");
	return 0;
}
