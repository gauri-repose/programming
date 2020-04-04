//Accept twi numbers from user and return its subtraction
//i/p : 24 7
//o/p : 17

#include<stdio.h>
int sub(int,int);
int main()
{
        int no1,no2,ans=0;

        printf("enter two numbers to add\n");
        scanf("%d%d",&no1,&no2);

        ans=sub(no1,no2);

        printf("subtraction is : %d",ans);
}

int sub(int no1,int no2)
{
        return no1-no2;
}

