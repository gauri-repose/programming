//Accept an array from user and return maximum number from that array
//i/p : 11,15,37,34,2,3
//o/p : 2


#include<stdio.h>
int min(int *,int);
int main()
{
        int size,i,min_num=0;
        printf("how many numbers do you want?");
        scanf("%d",&size);
        int arr[size];
        printf("enter numbers\n");
        for(i=0;i<size;i++)
        {
                scanf("%d",&arr[i]);
        }

        min_num=min(arr,size);
        printf("minimum number is : %d",min_num);
}

int min(int a[],int size)
{
        int i=0;
        int min=100;
        for(i=0;i<size;i++)
        {
                if(a[i]<min)
                {
                        min=a[i];
                }
        }
        return min;
}

