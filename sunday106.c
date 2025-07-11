#include<stdio.h>
int main()
{
	int n,rev,temp;
	printf("Enter any natural number:");
	scanf("%i",&n);
	temp=n;
	for(rev=0;n!=0;n=n/10)
	{
		rev=rev*10+n%10;
	}
	if(temp==rev)
		printf("Palindrome number");
	else
		printf("Not a palindrome number");
	return 0;
}
