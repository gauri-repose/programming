//Accept a number from user and display odd numbers upto that number
//i/p : 13
//o/p : 1 3 5 7 9 11 13

#include<stdio.h>
void odd(int);
int main()
{
        int no=0;

        printf("enter a number\n");
        scanf("%d",&no);
        odd(no);
}

void odd(int no1)
{
        int i=0;

        for(i=0;i<no1;i++)
        {
                if((i%2)!=0)
                {
                        printf("%d",i);
                }
        }
}

