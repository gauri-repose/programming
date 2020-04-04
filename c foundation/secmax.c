//Accept an array from user and display second max number from that array
//i/p : 3 6 5 2 2 7 7
//o/p : 5

#include<stdio.h>
#include<limits.h>
int secmax(int *,int);
int main()
{
        int size,i,secmax_num=0;
        printf("how many numbers do you want?");
        scanf("%d",&size);
        int arr[size];
        printf("enter numbers\n");
        for(i=0;i<size;i++)
        {
                scanf("%d",&arr[i]);
        }

        secmax_num=secmax(arr,size);
        printf("second maximum number is : %d",secmax_num);
}

int secmax(int a[],int size)
{
        int i=0;
        int max1,max2=0;
	max1=max2=INT_MIN;
        for(i=0;i<size;i++)
        {
                if((a[i]>max1) || (a[i]>max2 && a[i]<max1) )
                {
                       max2=max1;
			max1=a[i];
                }
		
        }
	if(max2== INT_MIN)
	{
		max2=-1;
	}
        return max2;
}

