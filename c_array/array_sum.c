//write a program that accepts an array of integers and print sum of all numbers

#include<stdio.h>

int array_sum(int [],int);

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

        ret=array_sum(arr,size);

	printf("sum of all numbers in array is  : %d\n",ret);
        return 0;
}

int array_sum(int arr[],int size)
{
        int i=0,sum=0;
         for(i=0;i<size;i++)
        {
        	sum=sum+arr[i];    
        }
	 return sum;
}

