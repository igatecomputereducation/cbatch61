#include<stdio.h>
int main()
{
	int num;
	printf("Enter an integer:");
	scanf("%i",&num);
	if(num==0)
		printf("zero");
	if(num>0)
		printf("Positive number");
	if(num<0)
		printf("Negative number");
	return 0;
}
