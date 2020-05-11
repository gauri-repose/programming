//write a program that accepts an array of integers and print difference between sum of even numbers and the sum of odd numbers

#include<stdio.h>

int array_diff(int [],int);

int main()
{
	int size=0,i=0,ret=0;
	int arr[size];

	printf("enter size of array : \n");
	scanf("%d",&size);

	printf("enter elements in array\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}

	ret=array_diff(arr,size);

	printf("sum of all numbers in array is  : %d\n",ret);
	return 0;
}

int array_diff(int arr[],int size)
{
	int i=0,even_sum=0,odd_sum=0;
	for(i=0;i<size;i++)
	{
		if((arr[i]%2)==0)
		{
			even_sum=even_sum+arr[i];
		}
		else
		{
			odd_sum=odd_sum+arr[i];
		}
	}
	return (even_sum-odd_sum);
}

