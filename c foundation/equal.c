//Accept two numers from user and check whether two numbers are equal or not
//i/p : 45 45
//o/p : "numbers are equal"

//i/p : 4 22
//o/p : "numbers are not equal"

#include<stdio.h>
int equal(int,int);

int main()
{
	int no1,no2,ans=0;
	printf("enter two numbers\n");
	scanf("%d%d",&no1,&no2);
	
	ans=equal(no1,no2);
	if(ans==1)
	{
		printf("numbers are equal\n");
	}
	else
	{
		printf("numbers are not equal\n");
	}
}
int equal(int no1,int no2)
{
	if(no1==no2)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
