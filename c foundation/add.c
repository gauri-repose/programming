//Accept two numbers from user and return addition of those numbers, Write saperate function for adding two numbers
//i/p : 23 456
//o/p : 479

#include<stdio.h>
int add(int,int);
int main()
{
	int no1,no2,ans=0;

	printf("enter two numbers to add\n");
	scanf("%d%d",&no1,&no2);

	ans=add(no1,no2);

	printf("addition is : %d",ans);
}

int add(int no1,int no2)
{
	return no1+no2;
}
