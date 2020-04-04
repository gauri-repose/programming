//Accept a number from user and check whether its prime or not

#include<stdio.h>
int chkPrime(int);
int main()
{
	int no,ret=0;
	printf("Enter a Number\n");
	scanf("%d",&no);
	ret=chkPrime(no);
	if(ret==0)
	{
		printf("Prime\n");
	}
	else
	{
		printf("Not Prime\n");
	}
	return 0;
}
int chkPrime(int no)
{
	int i,flag=0;
	for(i=2;i<no;i++)
	{
		if(no%i==0)
		{
			flag=1;
		}
	}
	return flag;
}
