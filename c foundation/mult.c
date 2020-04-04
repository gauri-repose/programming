//Accept two numbers from user and return its multiplication
//i/p : 2 8
//o/p : " multipliaction is : 16"


#include<stdio.h>
int mult(int,int);
int main()
{
        int no1,no2,ans=0;

        printf("enter two numbers to add\n");
        scanf("%d%d",&no1,&no2);

        ans=mult(no1,no2);

        printf("multiplication is : %d",ans);
}

int mult(int no1,int no2)
{
        return no1*no2;
}

