//Accept an array from user and return maximum number from that array
//i/p : 11,15,37,34,2,3
//o/p : 37

#include<stdio.h>
int max(int *,int);
int main()
{
	int size,i,max_num=0;
	printf("how many numbers do you want?");
	scanf("%d",&size);
	int arr[size];
	printf("enter numbers\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}

	max_num=max(arr,size);
	printf("maximum number is : %d",max_num);
}

int max(int a[],int size)
{
	int i=0;
	int max=0;
	for(i=0;i<size;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	return max;
}
