//Accept two numbers from user and display its common factors

#include<stdio.h>
void commonFactor(int,int);
int main()
{
	int no1,no2;
	printf("Enter Two Numbers\n");
	scanf("%d %d",&no1,&no2);
	commonFactor(no1,no2);
	return 0;
}
void commonFactor(int no1,int no2)
{
	int i=1;
	int j=1;
	/*while((i<=no1) && (i<=no2))
	{
		if((no1%i==0) && (no2%i==0))
		{
			printf("%d\t",i);
		}
		i++;
	}*/
	for(i=1;i<=no1/2,i<=no2/2;i++)
	{
		 if((no1%i==0) && (no2%i==0))
                {
                        printf("%d\t",i);
                }
	}
	
}
