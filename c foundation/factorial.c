//Accept a number from user abd display its factorial

#include<stdio.h>
int Factorial(int);
int main()
{
	int no,ret=0;
	printf("Enter a Number to Find Factorial\n");
	scanf("%d",&no);
	ret=Factorial(no);
	printf("Factorial is : %d",ret);
	return 0;
}
int Factorial(int no)
{
	int i=0;
	int fact=1;
	for(i=1;i<=no;i++)
	{
		fact=fact*i;
	}
	return fact;
}
