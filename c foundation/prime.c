//Accept range from user and display prime numbers from that range

#include<stdio.h>
void rangeprime(int,int);
int main()
{
	int r1,r2,ret=0;
	printf("Enter Range\n");
	scanf("%d%d",&r1,&r2);
	rangeprime(r1,r2);
	return 0;
}
void rangeprime(int r1,int r2)
{
	int i,j,flag=0;
	for(i=r1;i<=r2;i++)
	{
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			{
				flag=1;
			}
		}
		if(flag==0 && i!=1)
		{
			printf("%d\t",i);
		}
		flag=0;
	}
}
