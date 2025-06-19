#include<stdio.h>
int main()
{
	int mat,phy,che;
	printf("Enter the marks in maths, physics and chemistry..\n");
	scanf("%i%i%i",&mat,&phy,&che);
	if(mat>=35)
	{
		if(phy>=35)
		{
			if(che>=35)
				printf("pass");
			else
				printf("Failed");
		}
		else
			printf("failed");
	}
	else
		printf("failed");
	return 0;
}
