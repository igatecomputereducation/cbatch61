#include<stdio.h>
int main()
{
	char gen;
	int age;
	float per;
	printf("Gender m/f:");
	scanf("%c",&gen);
	printf("Age:");
	scanf("%i",&age);
	printf("Percentage:");
	scanf("%f",&per);
	if(gen=='m')
	{
		if(per>=60)
		{
			if(age>=30)
			{
				if(age<=45)
					printf("selected");
				else
					printf("Not selected");
			}
			else
				printf("Not selected");
		}
		else
			printf("Not selected");
	}
	else
		printf("Not selected");
	
	return 0;
}






