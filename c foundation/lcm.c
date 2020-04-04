//Accept two numbers from user and display "least common multiple" of those numbers

#include<stdio.h>
void lcm(int,int);
int main()
{
	int no1,no2;
	printf("Enter Two Numbers\n");
	scanf("%d %d",&no1,&no2);
	lcm(no1,no2);
	return 0;
}
void lcm(int no1,int no2)
{
	int i=1;
	int lcm=0;
	//int j=1;
	int max=1000;
	while(1)
	{
		 if((i%no1==0) && (i%no2==0))
                {
                        lcm=i;
			break;
                }
		i++;
	}
	printf("%d",lcm);
	
}
