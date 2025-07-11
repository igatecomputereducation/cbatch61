#include<stdio.h>
int main()
{
	int n,fi,se,th,fo,rev,temp;
	printf("Enter any 4 digit natural number:");
	scanf("%i",&n);
	temp=n;
	fo=n%10;
	n=n/10;
	th=n%10;
	n=n/10;
	se=n%10;
	n=n/10;
	fi=n%10;
	rev=fo*1000+th*100+se*10+fi;
	if(temp==rev)
		printf("Palindrome number");
	else
		printf("Not a palindrome number");
	return 0;
}
