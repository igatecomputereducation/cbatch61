#include<stdio.h>
int main()
{
	int len,bre,area,peri;
	len=5;
	bre=4;
	area=len*bre;
	peri=2*(len+bre);
	printf("Area of rectangle %i\n",area);
	printf("Perimeter of rectangle %i",peri);
	return 0;
}
