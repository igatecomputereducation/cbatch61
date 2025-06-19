#include<stdio.h>
int main()
{
	char alp;
	printf("Enter an alphabet:");
	scanf("%c",&alp);
	if(alp=='a')
		printf("Vowel");
	else
	{
		if(alp=='e')
			printf("Vowel");
		else
		{
			if(alp=='i')
				printf("Vowel");
			else
			{
				if(alp=='o')
					printf("Vowel");
				else
				{
					if(alp=='u')
						printf("Vowel");
					else
						printf("Consonent");
				}
			}
		}
	}
	return 0;
}
