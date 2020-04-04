//Accept range from user and display perfect number from that range

#include<stdio.h>
void rangeperfect(int,int);
int main()
{
	int no1,no2=0;
	printf("enter range\n");
	scanf("%d%d",&no1,&no2);
	rangeperfect(no1,no2);
}
void rangeperfect(int no1,int no2)
{
	int i,sum,j=0;
	for(i=no1;i<=no2;i++)
	{
		for(j=1;j<=i/2;j++)
		{
			if(i%j==0)
			{
				sum=sum+j;
			//	printf("%d",sum);
			}
		}
		if(sum==i)
		{
			printf("%d\t",i);
		}
		sum=0;
	}

}

