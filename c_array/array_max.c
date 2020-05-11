//write a program that accepts an array of numbers and return maximum of it

#include<stdio.h>

int array_max(int [],int);

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

        ret=array_max(arr,size);

	printf("maximum of all numbers in array is  : %d\n",ret);
        return 0;
}

int array_max(int arr[],int size)
{
        int i=0,max=arr[0];
         for(i=0;i<size;i++)
        {
		if(arr[i]>max)
		{
        		max=arr[i];    
        	}
	}
	 return max;
}

