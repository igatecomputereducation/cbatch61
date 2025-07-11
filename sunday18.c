#include<stdio.h>
int main()
{
	int n,fi,se,th,sm;
	printf("Enter any 3 digit natural number:");
	scanf("%i",&n);
	th=n%10;
	n=n/10;
	se=n%10;
	n=n/10;
	fi=n%10;
	sm=fi+se+th;
	printf("Sum of all the digits %i",sm);
	return 0;
}
