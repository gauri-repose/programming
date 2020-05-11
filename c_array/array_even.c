//write a program that accepts an array of integers and print only even numbers from an array

#include<stdio.h>

void array_even(int [],int);

int main()
{
	int size=0,i=0;
	int arr[size];

	printf("enter size of array : \n");
	scanf("%d",&size);
	
	printf("enter elements in array\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}

	array_even(arr,size);
	return 0;
}

void array_even(int arr[],int size)
{
	int i=0;
	 for(i=0;i<size;i++)
        {
		if((arr[i]%2)==0)
		{
                	printf("%d\t",arr[i]);
		}
        }
}
