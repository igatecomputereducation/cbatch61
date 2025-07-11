#include<stdio.h>
int main()
{
	char ltype;
	int amt,time;
	float rate,si,tot;
	
	printf("Enter loan type [c/p/v/b/h]:");
	scanf("%c",&ltype);
	printf("Amount:");
	scanf("%i",&amt);
	printf("Time in months:");
	scanf("%i",&time);
	
	switch(ltype)
	{
		case 'c':
			rate=0.75;
			break;
		case 'p':
			rate=2.25;
			break;
		case 'v':
			rate=1.50;
			break;
		case 'b':
			rate=2.75;
			break;
		case 'h':
			rate=1.25;
	}
	si=amt*time*rate/100;
	tot=amt+si;
	printf("---------------------------------\n");
	printf("Amount    %i\n",amt);
	printf("Interest @%.2f %.2f\n",rate,si);
	printf("total    %.2f",tot);
	return 0;
}
