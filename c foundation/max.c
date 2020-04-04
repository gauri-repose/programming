//Accept two numbers from user and return maximum from it
//i/p : 35 19
//o/p : " maximum number is : 35"

#include<stdio.h>
int max(int,int);
int main()
{
        int no1,no2,ans=0;

        printf("enter two numbers\n");
        scanf("%d%d",&no1,&no2);

        ans=max(no1,no2);

        printf("maximum munber is : %d",ans);
}
int max(int no1,int no2)
{
        if(no1>no2)
        {
                return no1;
        }
        else
        {
                return no2;
        }
}


