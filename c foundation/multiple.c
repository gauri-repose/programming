//Accept a number from user and display 5 multiples of that number
//i/p : 5
//o/p : 5 10 15 20 25

#include<stdio.h>
void multiple(int);
int main()
{
	int no=0;

	printf("enter a number\n");
	scanf("%d",&no);
	multiple(no);
}

void multiple(int no1)
{
	int i=0;

	for(i=1;i<=5;i++)
	{
		printf("%d\t",no1*i);
	}
}
