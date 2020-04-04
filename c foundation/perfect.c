//Accept a number from user and check whether its perfect or not

#include<stdio.h>
int perfect(int);
int main()
{
	int no,ret=0;
	printf("enter a number\n");
	scanf("%d",&no);
	ret=perfect(no);
	if(ret==1)
	{
		printf("perfect number\n");
	}
	else
	{
		printf("not perfect\n");
	}
}
int perfect(int no)
{
	int i,sum=0;
	for(i=1;i<=no/2;i++)
	{
		if(no%i==0)
		{
			sum=sum+i;
		}
	}
	if(sum==no)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
