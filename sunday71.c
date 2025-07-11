#include<stdio.h>
int main()
{
	int n,fi,se,th;
	
	printf("Enter any 3 digit natural number:");
	scanf("%i",&n);
	
	th=n%10;
	n=n/10;
	se=n%10;
	n=n/10;
	fi=n%10;
	
	switch(fi)
	{
		case 9:
			printf("Nine hundred");
			break;
		case 8:
			printf("Eight hundred");
			break;
		case 7:
			printf("Seven hundred");
			break;
		case 6:
			printf("Six hundred");
			break;
		case 5:
			printf("Five hundred");
			break;
		case 4:
			printf("Four hundred");
			break;
		case 3:
			printf("Three hundred");
			break;
		case 2:
			printf("Two hundred");
			break;
		case 1:
			printf("One hundred");
	}
	
	
	
	if(se!=0 || th!=0)
		printf(" and ");
	
	switch(se)
	{
		case 9:
			printf("ninety");
			break;
		case 8:
			printf("eighty");
			break;
		case 7:
			printf("seventy");
			break;
		case 6:
			printf("sixty");
			break;
		case 5:
			printf("fifty");
			break;
		case 4:
			printf("fourty");
			break;
		case 3:
			printf("thirty");
			break;
		case 2:
			printf("twenty");
			break;
		case 1:
			switch(th)
			{
				case 0:
					printf("ten");
					break;
				case 1:
					printf("eleven");
					break;
				case 2:
					printf("twelve");
					break;
				case 3:
					printf("thirteen");
					break;
				case 4:
					printf("fourteen");
					break;
				case 5:
					printf("fifteen");
					break;
				case 6:
					printf("sixteen");
					break;
				case 7:
					printf("seventeen");
					break;
				case 8:
					printf("eighteen");
					break;
				case 9:
					printf("nineteen");
			}
	}
	
	
	printf(" ");
	
	if(se!=1)
	{
		switch(th)
		{
			case 9:
				printf("nine");
				break;
			case 8:
				printf("eight");
				break;
			case 7:
				printf("seven");
				break;
			case 6:
				printf("six");
				break;
			case 5:
				printf("five");
				break;
			case 4:
				printf("four");
				break;
			case 3:
				printf("three");
				break;
			case 2:
				printf("two");
				break;
			case 1:
				printf("one");
				break;
		}
	}
	

	return 0;
}

