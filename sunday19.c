#include<stdio.h>
int main()
{
	int n,fi,se,th,fo,sm;
	printf("Enter any 4 digit natural number:");
	scanf("%i",&n);
	fo=n%10;
	n=n/10;
	th=n%10;
	n=n/10;
	se=n%10;
	n=n/10;
	fi=n%10;
	sm=fi+se+th+fo;
	printf("Sum of all the digits %i",sm);
	return 0;
}
