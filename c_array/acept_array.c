//write a program which accept integer array and print it

#include<stdio.h>
void print_array(int [],int);

int main()
{
	int size=0,i=0;
	int arr[size];

	printf("enter how many elements do you want\n");
	scanf("%d",&size);

	printf("enter array elements\n");

	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}

	print_array(arr,size);

	return 0;
}

void print_array(int arr[],int size)
{
	int i=0;
	printf("array elements are\n");
	for(i=0;i<size;i++)
	{
		printf("%d\t",arr[i]);
	}
}
