//Accept N numbers from user and display addition of two numbers while traversing in forward as well as backword direction

#include<stdio.h>
void array_add(int [],int);

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


        array_add(arr,size);
        return 0;
}

void array_add(int arr[],int size)
{
	int i=0,j=0,flag=0,sum=0;

	for(i=0,j=size-1;i<size;i++,j--)
	{
		if(i<j)
		{
			sum=arr[i]+arr[j];
			printf("%d+%d=%d\t",arr[i],arr[j],sum);
		}
		sum=0;
	}
}

