#include<stdio.h>
int main()
{
	char alp;
	
	printf("Enter any alphabet:");
	scanf("%c",&alp);
	
	if(alp>='A' && alp<='Z')
		alp=alp+32;
	
	switch(alp)
	{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			printf("Vowel");
			break;
		default:
			printf("Consonent");
	}

	return 0;
}
