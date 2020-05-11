//Accept array and check wheather array is sorted or not(ascending)

#include<stdio.h>
int array_palindrome(int [],int);

int main()
{
        int i=0,size=0,ret;

        printf("enter array size\n");
        scanf("%d",&size);
        int arr[size];

        printf("Enter array elements\n");
        for(i=0;i<size;i++)
        {
                scanf("%d",&arr[i]);
        }


        ret=array_palindrome(arr,size);
        if(ret==0)
        {
                printf("array is sorted\n");
        }
        else
        {
                printf("array is not sorted\n");
        }
        return 0;
}

int array_palindrome(int arr[],int size)
{
        int i=0,flag=0;

        for(i=0;i<size-1;i++)
        {
                if(arr[i]>arr[i+1])
                {
                        flag=1;
                        break;
                }
        }
        return flag;
}

