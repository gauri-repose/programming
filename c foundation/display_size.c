//Accept number from user and display its size

#include<stdio.h>
void size(int);
int main()
{
	int no=0;
	printf("enter size");
	scanf("%d",&no);
	size(no);
	return 0;
}
void size(int no)
{
	if(no<50)
	{
		printf("small\n");
	}
	else if(no>50 && no<100)
	{
		printf("medium\n");
	}
	else if(no>100)
	{
		printf("large\n");
	}
	else
	{
		printf("wrong input\n");
	}
}
