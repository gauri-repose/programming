//write a program that accepts an array of integers and print it in reverse order(complexity N)

#include<stdio.h>

void array_reverse(int [],int);

int main()
{
        int size=0,i=0;
        int arr[size];

        printf("enter size of array : \n");
        scanf("%d",&size);

        printf("enter elements in array\n");
        for(i=0;i<size;i++)
        {
                scanf("%d",&arr[i]);
        }

        array_reverse(arr,size);
        return 0;
}

void array_reverse(int arr[],int size)
{
        int i=0;
         for(i=size-1;i>=0;i--)
        {
        	printf("%d\t",arr[i]);
        }
}

