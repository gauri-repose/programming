//accept integer array from user , accept range from user and give addition of numbers in beteween(inclusive range)

#include<stdio.h>
int add_range(int [],int,int,int);

int main()
{
        int i=0,size=0,ret=0,start=0,end=0;

        printf("enter array size\n");
        scanf("%d",&size);
        int arr[size];

        printf("Enter array elements\n");
        for(i=0;i<size;i++)
        {
                scanf("%d",&arr[i]);
        }

	printf("enter range in format start and end\n");
        scanf("%d%d",&start,&end);


        ret=add_range(arr,size,start,end);
	printf("addition of numbers id : %d",ret);
        return 0;
}

int add_range(int arr[],int size,int start,int end)
{
        int i=0,sum=0;

        for(i=0;i<size;i++)
        {
                if(start<=arr[i] && arr[i]<=end)
                {
                        sum=sum+arr[i];
                }
        }
	return sum;

}

