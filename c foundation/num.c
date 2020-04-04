//Accept a number from user and check whether its greater than 100 or not
//i/p : 28
//o/p : number is not greater tha 100

//i/p : 564
//o/p : number is greater than 100

#include<stdio.h>

int main()
{
	int num=0;

	printf("enter a number\n");
	scanf("%d",&num);

	if(num>100)
	{
		printf("number is greater than 100\n");
	}
	else
	{
		printf("number is not greater than 100\n");
	}
	return 0;
}
