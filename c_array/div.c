//Accept array from user and display all the numbers which are divisible by 5 & 3 

#include<stdio.h>

void array_div(int [],int);

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

        array_div(arr,size);

        return 0;
}

void array_div(int arr[],int size)
{
        int i=0,temp=0,cnt=0;
         for(i=0;i<size;i++)
        {
		if((arr[i]%5==0) && (arr[i]%3==0))
		{
			printf("%d\t",arr[i]);
		}
        }
  
}

