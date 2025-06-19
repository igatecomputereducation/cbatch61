#include<stdio.h>
int main()
{
	int b,w,h,v;
	printf("Breadth:");
	scanf("%i",&b);
	printf("Width:");
	scanf("%i",&w);
	printf("Height:");
	scanf("%i",&h);
	v=b*w*h;
	printf("Volume of box %i",v);
	return 0;
}
