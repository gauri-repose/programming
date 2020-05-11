//write a program that accepts an array of numbers and return minimum of it

#include<stdio.h>

int array_min(int [],int);

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

        ret=array_min(arr,size);

        printf("minimum of all numbers in array is  : %d\n",ret);
        return 0;
}

int array_min(int arr[],int size)
{
        int i=0,min=arr[0];
         for(i=0;i<size;i++)
        {
                if(arr[i]<min)
                {
                        min=arr[i];
                }
        }
         return min;
}

