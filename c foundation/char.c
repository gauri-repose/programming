//Accept a character from user and check whether its a characater or not and if it is check whether it is upper case,lower case
//i/p : a
//o/p : lower case

//i/p : A
//o/p : upper case

//i/p : &
//o/p : not a character

#include<stdio.h>
#include<ctype.h>
int main()
{
	char a='\0';
	printf("enter a character\n");
	scanf("%c",&a);
	if(islower(a))
	{
		printf("lower case\n");
	}
	else if(isupper(a))
	{
		printf("upper case\n");
	}
	else
	{
		printf("not a charecter\n");
	}
	return 0;
}
