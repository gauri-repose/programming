//Accept a number from user and display whether it is perfect or not

#include<stdio.h>
int perfect(int);
int main()
{
	int no,ret;
	printf("Enter a Number\n");
	scanf("%d",&no);
	ret=perfect(no);
	if(ret==no)
	{
		printf("perfect\n");
	}
	else
	{
		printf("not perfect\n");
	}
	return 0;
}
int perfect(int no)
{
	int i=1,sum=0;
	for(i=1;i<=no/2;i++)
	{
		 if((no%i==0))
                {
                        sum=sum+i;
                }
	}
	//printf("%d",sum);
	return sum;
	
}
