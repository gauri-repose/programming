//accept integer array from user and a number and return addition that number of elements only

#include<stdio.h>
int add_upto(int [],int,int);

int main()
{
	int i=0,size=0,ret=0,no=0;

	printf("enter array size\n");
	scanf("%d",&size);
	int arr[size];

	printf("Enter array elements\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}

	printf("enter number of elements to add\n");
	scanf("%d",&no);


	ret=add_upto(arr,size,no);
	printf("addition of numbers id : %d",ret);
	return 0;
}

int add_upto(int arr[],int size,int no)
{
	int i=0,sum=0;
	if(arr!=NULL && no<size)
	{
		for(i=0;i<no;i++)
		{
				sum=sum+arr[i];
		}
	}
	else
	{
		printf("give appropriate inputs");
	}
	return sum;

}

