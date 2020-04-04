//Accept percentage from user and display the class obtained
//i/p : 70
//o/p : "first class"

#include<stdio.h>
void class(float);
int main()
{
	float per=0.0f;
	printf("Enter percentage\n");
	scanf("%f",&per);
	class(per);
	return 0;
}
void class(float per)
{
	if(per>70)
	{
		printf("Distinction\n");
	}
	else if(per>60 && per<=70)
	{
		printf("first class\n");
	}
	else if(per>50 && per<=60)
	{
		printf("second class");
	}
	else if(per>35 && per<=50)
	{
		printf("pass\n");
	}
	else
	{
		printf("fail\n");
	}
}
