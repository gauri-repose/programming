//Accept a number from user amd display natural numbers upto that number
//i/p : 12
//o/p : 1 2 3 4 5 6 7 8 9 10 11 12

#include<stdio.h>
void num(int);
int main()
{
	int no=0;

	printf("enter a number\n");
	scanf("%d",&no);
	num(no);
}

void num(int no1)
{
	int i=0;

	for(i=1;i<=no1;i++)
	{
		printf("%d\t",i);
	}
}
