#include<stdio.h>
int main()
{
	int n,fi,se,th,fo,rev;
	printf("Enter any 4 digit natural number:");
	scanf("%i",&n);
	fo=n%10;
	n=n/10;
	th=n%10;
	n=n/10;
	se=n%10;
	n=n/10;
	fi=n%10;
	rev=fo*1000+th*100+se*10+fi;
	printf("The reverse number %i",rev);
	return 0;
}
