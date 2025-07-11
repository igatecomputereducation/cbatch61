#include<stdio.h>
int main()
{
	char alp;
	printf("Enter any alphabet:");
	scanf("%c",&alp);
	
	if(alp=='a' || alp=='e' || alp=='i' || alp=='o' || alp=='u')
		printf("Vowel");
	else
		printf("Consonent");
	
	return 0;
}
