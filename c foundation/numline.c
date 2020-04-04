//Accept a number from user and display its number line
//i/p : 5
//o/p : -5 -4 -3 -2 -1 0 1 2 3 4 5

#include<stdio.h>
void numline(int);
int main()
{
	int no=0;

	printf("enter a number\n");
	scanf("%d",&no);
	numline(no);
}

void numline(int no1)
{
	int i=0;
	for(i=0;i<=no1;i++)
	{
		printf("%d\t",i-no1);
	}
	for(i=1;i<=no1;i++)
	{
		printf("%d\t",i);
	}
}
