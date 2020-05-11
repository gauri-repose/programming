//accept array from user and display palindrome number in it

#include<stdio.h>
void array_palindrome(int [],int);

int main()
{
	int i=0,size=0;
	
	printf("enter array size\n");
	scanf("%d",&size);
	int arr[size];

	printf("enter array elements\n");

	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	array_palindrome(arr,size);
	return 0;
}

void array_palindrome(int arr[],int size)
{
	int i=0,temp=0,rev=0;

	for(i=0;i<size;i++)
	{
		temp=arr[i];
		while(temp!=0)
		{
			rev=rev*10+(temp%10);
			temp/=10;
		}
		if(rev==arr[i])
		{
			printf("%d",arr[i]);
		}
		rev=0;
	}

}
