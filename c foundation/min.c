//Accept two numbers from user and return minimum from it
//i/p : 35 19
//o/p : " minimum number is : 19"


#include<stdio.h>
int min(int,int);
int main()
{
        int no1,no2,ans=0;

        printf("enter two numbers\n");
        scanf("%d%d",&no1,&no2);

	ans=min(no1,no2);

	printf("minimum munber is : %d",ans);
}
int min(int no1,int no2)
{
        if(no1<no2)
        {
                return no1;
        }
        else
        {
                return no2;
        }
}


