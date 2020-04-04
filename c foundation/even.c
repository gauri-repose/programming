//Accept a number from user and check whether its even or odd
//i/p : 56
//o/p : "number is even"

//i/p : 31
//o/p : "number is odd"

#include<stdio.h>
int even(int);
int main()
{
	int no,ans=0;

	printf("enter a number\n");
	scanf("%d",&no);
	ans=even(no);
	if(ans==1)
	{
		printf("numbers is even\n");
	}
	else
	{
		printf("number is odd\n");
	}
}
int even(int no)
{
	if((no%2)==0) 
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
