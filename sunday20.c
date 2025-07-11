#include<stdio.h>
int main()
{
	int n,fi,se,th,rev;
	printf("Enter any 3 digit natural number:");
	scanf("%i",&n);
	th=n%10;
	n=n/10;
	se=n%10;
	n=n/10;
	fi=n%10;
	rev=th*100+se*10+fi;
	printf("The reverse number %i",rev);
	return 0;
}
