//write a program that accepts an array of numbers and print sum of digit

#include<stdio.h>

void arrsum_digit(int [],int);

int main()
{
        int size=0,i=0,ret=0;
        int arr[size];

        printf("enter size of array : \n");
        scanf("%d",&size);

        printf("enter elements in array\n");
        for(i=0;i<size;i++)
        {
                scanf("%d",&arr[i]);
        }

        arrsum_digit(arr,size);

        return 0;
}

void arrsum_digit(int arr[],int size)
{
        int i=0,temp=0,sum=0;
         for(i=0;i<size;i++)
        {
                temp=arr[i];
                while(temp!=0)
                {
                        sum=sum+temp%10;
                        temp=temp/10;
                }
                printf("%d\t",sum);
                sum=0;
        }

}


