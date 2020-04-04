//Accept a digit from user and display it in word
//i/p : 3
//o/p : "three"

#include<stdio.h>
void printchar(int);
int main()
{
	int no=0;
	printf("enter a number\n");
	scanf("%d",&no);
	printchar(no);
	return 0;
}
void printchar(int no)
{
	switch(no)
	{
		case 0:
			printf("zero");
			break;
		case 1:
			printf("one");
			break;
		case 2:
			printf("two");
			break;
		case 3:
			printf("three");
			break;
		case 4:
			printf("four");
			break;
		case 5:
			printf("five");
			break;
		case 6:
			printf("six");
			break;
		case 7:
			printf("seven");
			break;
		case 8:
			printf("eight");
			break;
		case 9:
			printf("nine");
			break;
		default:
			printf("give proper input");
	}
}

