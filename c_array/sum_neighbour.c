//Accept N numbers from user and display all such no whose maagnitude is same as summation of its neighbour

#include<stdio.h>
void sum_neighbour(int [],int);

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


        sum_neighbour(arr,size);

        return 0;
}

void sum_neighbour(int arr[],int size)
{
        int i=0,sum=0;

        for(i=1;i<size-1;i++)
        {
                if(((arr[i-1]+arr[i+1])==arr[i]))
                {
                        printf("%d+%d=%d\n",arr[i-1],arr[i+1],arr[i]);
                }
        }
}


