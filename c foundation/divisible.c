//Accept two numbers from user and check whether first number is completely divisible by second number or not,check is denominator is zero or not
//i/p : 4 2
//o/p : "divisible"

//i/p : 3 5
//o/p : "not divisible"

#include<stdio.h>
int divi(int,int);
int main()
{
        int no1,no2,ans=0;

        printf("enter two numbers\n");
        scanf("%d%d",&no1,&no2);
	ans=divi(no1,no2);

	if(ans==1)
	{
		printf("divisible\n");
	}
	else if(ans==0)
	{
		printf("not divisible\n");
	}
	else
	{
		printf("denominator can not be zero\n");
	}

}
int divi(int no1,int no2)
{
	if(no2==0)
	{
		return -1;
	}
        if((no1%no2)==0)
        {
                return 1;
        }
        else
        {
                return 0;
        }
}


