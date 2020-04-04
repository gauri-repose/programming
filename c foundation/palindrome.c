//Accept a number from user and check whether its palindrome or not

#include<stdio.h>
int reverse(int);

int main()
{
	int no,ret;
	printf("enter a number to check if its palindrome or not\n");
	scanf("%d",&no);
	ret=reverse(no);
	if(ret==no)
	{
		printf("it is palindrome\n");
	}
	else
	{
		printf("it is not palindrome\n");
	}
	return 0;
}

int reverse(int no)
{
	int digit,rev=0,temp=no;
	while(temp!=0)
	{
		digit=temp%10;
		rev=rev*10+digit;
		temp=temp/10;
	}
	printf("%d",rev);
	return rev;
}
