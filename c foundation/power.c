//Accept a number and exponent from user and diplay power

#include<stdio.h>
int power(int,int);
int main()
{
	int no,pow,ret=0;
	printf("Enter a Number and Power\n");
	scanf("%d%d",&no,&pow);
	ret=power(no,pow);
	printf("power is : %d",ret);
	return 0;
}
int power(int no,int pow)
{
	int i=0;
	int ans=1;
	for(i=0;i<pow;i++)
	{
		ans=ans*no;
	}
	return ans;
}
