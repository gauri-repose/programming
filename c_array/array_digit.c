//write a program that accepts an array of numbers and print count of digit

#include<stdio.h>

void array_digit(int [],int);

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

        array_digit(arr,size);

        return 0;
}

void array_digit(int arr[],int size)
{
        int i=0,temp=0,cnt=0;
         for(i=0;i<size;i++)
        {
		temp=arr[i];
                while(temp!=0)
                {
                        cnt++;
			temp=temp/10;
                }
		printf("%d\t",cnt);
		cnt=0;
        }
  
}

