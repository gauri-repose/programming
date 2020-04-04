//Accept full name from user and display it
//i/p : Gauri Dhananjay Raskar
//o/p : Gauri Dhananjay Raskar

#include<stdio.h>

int main()
{
	char buff[100];

	printf("enter your name\n");
	scanf("%[^\n]%*c",buff);
	printf("your name is : %s",buff);
}
