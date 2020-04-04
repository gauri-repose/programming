//Accept a number from user and display its even numbers upto that number
//i/p : 25
//o/p : 0 2 4 6 8 10 12 14 16 18 20 22 24 

#include<stdio.h>
void even(int);
int main()
{
	int no=0;

	printf("enter a number\n");
	scanf("%d",&no);
	even(no);
}

void even(int no1)
{
	int i=0;

	for(i=0;i<no1;i++)
	{
		if((i%2)==0)
		{
			printf("%d\t",i);
		}
	}
}
