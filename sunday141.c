#include<stdio.h>
int main()
{
	int a[5];
	printf("Enter 2 integers..\n");
	scanf("%i%i",&a[0],&a[1]);
	a[2]=a[0]+a[1];
	a[3]=a[0]-a[1];
	a[4]=a[0]*a[1];
	printf("Sum %i\n",a[2]);
	printf("Subtraction %i\n",a[3]);
	printf("Product %i",a[4]);
	return 0;
}
