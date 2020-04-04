//Accept a number from user and display that number of $
//i/p : 6
//o/p : $$$$$$

#include<stdio.h>
void print(int);
int main()
{
	int no=0;

	printf("enter a number\n");
	scanf("%d",&no);
	print(no);
}

void print(int no1)
{
	int i=0;

	for(i=0;i<no1;i++)
	{
		printf("$");
	}
}
