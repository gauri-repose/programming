//Accept N numbers from user and display all cinsecutive pairs whose addition is even

#include<stdio.h>
void cons_even(int [],int);

int main()
{
        int i=0,size=0;

        printf("enter array size\n");
        scanf("%d",&size);
        int arr[size];

        printf("Enter array elements\n");
        for(i=0;i<size;i++)
        {
                scanf("%d",&arr[i]);
        }


        cons_even(arr,size);
	
        return 0;
}

void cons_even(int arr[],int size)
{
        int i=0,sum=0;

        for(i=0;i<size-1;i++)
        {
                if(((arr[i]+arr[i+1])%2)==0)
                {
                        printf("%d:%d\n",arr[i],arr[i+1]);
                }
        }
}

