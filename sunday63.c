#include<stdio.h>
int main()
{
	char ch;
	
	printf("Enter any character:");
	scanf("%c",&ch);
	
	if(ch>='A' && ch<='Z')
		ch=ch+32;
	
	if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
		printf("Vowel");
	else if(ch>='b' && ch<='z')
		printf("Consonent");
	else if(ch>='0' && ch<='9')
		printf("Digit")	;
	else
		printf("Symbol");
		
	return 0;
}

