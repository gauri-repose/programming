//Accept two numbers from user anbd display "greatest common divison" of those numbers

#include<stdio.h>
void gcf(int,int);
int main()
{
	int no1,no2;
	printf("Enter Two Numbers\n");
	scanf("%d %d",&no1,&no2);
	gcf(no1,no2);
	return 0;
}
void gcf(int no1,int no2)
{
	int i=1;
	int max=0;
	for(i=1;i<=no1/2,i<=no2/2;i++)
	{
		
		if((no1%i==0) && (no2%i==0))
                {
			max=i;
                }
	}
	printf("%d",max);
	
}
