#include<stdio.h>
int main()
{
	int n,fi,se,th,fo;
	printf("Enter any 4 digit natural number:");
	scanf("%i",&n);
	fo=n%10;
	n=n/10;
	th=n%10;
	n=n/10;
	se=n%10;
	n=n/10;
	fi=n%10;
	if(fi==fo)
	{
		if(se==th)
			printf("Palindrome number");
		else
			printf("Not a palindrome number");
	}
	else
		printf("Not a palindrome number");
	return 0;
}




