//Accept array from user and onr number and return its last occurence

#include<stdio.h>

int array_add(int [],int,int);

int main()
{
	int size=0,i=0,ret=0,num=0;
	int arr[size];

	printf("enter size of array : \n");
	scanf("%d",&size);

	printf("enter elements in array\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}

	printf("Enter a number\n");
	scanf("%d",&num);
	ret=array_add(arr,size,num);
	if(ret==-1)
	{
		printf("Array does not contain that many elements\n");
	}
	else
	{
		printf("addition is : %d",ret);
	}
	return 0;
}

int array_add(int arr[],int size,int num)
{
	int i=0,sum=0;
	if(num>size)
	{
		//      printf("Array does not contain that many elements\n");
		return -1;
	}
	else
	{
		for(i=0;i<num;i++)
		{
			sum=sum+arr[i];
		}
		return sum;
	}
}


