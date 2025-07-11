#include<stdio.h>
int main()
{
	int bre,wid,hei;
	printf("Enter 3 sides of a box..\n");
	scanf("%i%i%i",&bre,&wid,&hei);
	if(bre==wid)
	{
		if(wid==hei)
			printf("Cube");
		else
			printf("Not a cube");
	}
	else
		printf("Not a cube");
	
	
	return 0;
}
