#include<stdio.h>
int main()
{
	int n,fi,se,th,temp,sum;
	printf("Enter any 3 digit natural number:");
	scanf("%i",&n);
	temp=n;
	th=temp%10;
	temp=temp/10;
	se=temp%10;
	temp=temp/10;
	fi=temp%10;
	sum=fi*fi*fi+se*se*se+th*th*th;
	if(sum==n)
		printf("Armstrong number");
	else
		printf("Not an armstrong number");
	return 0;
}
