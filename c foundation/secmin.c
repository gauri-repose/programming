//Accept an array from user and display second max number from that array
//i/p : 3 6 5 2 2 7 7
//o/p : 3



#include<stdio.h>
#include<limits.h>
int secmin(int *,int);
int main()
{
        int size,i,secmin_num=0;
        printf("how many numbers do you want?");
        scanf("%d",&size);
        int arr[size];
        printf("enter numbers\n");
        for(i=0;i<size;i++)
        {
                scanf("%d",&arr[i]);
        }

        secmin_num=secmin(arr,size);
        printf("second minimum number is : %d",secmin_num);
}

int secmin(int a[],int size)
{
        int i=0;
        int min1,min2;
        min1=min2=INT_MAX;
        for(i=0;i<size;i++)
        {
                if((a[i]<min1) || (a[i]<min2 && a[i]>min1) )
                {
                       min2=min1;
                        min1=a[i];
                }

        }
        if(min2== INT_MIN)
        {
                min2=-1;
        }
        return min2;
}


