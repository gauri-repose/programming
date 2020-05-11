//write a program that accepts an array of integers and print only prime numbers from an array

#include<stdio.h>

void array_prime(int [],int);

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

        array_prime(arr,size);
        return 0;
}

void array_prime(int arr[],int size)
{
	int i=0,j=0,flag=0;
	for(i=0;i<size;i++)
	{
		for(j=2;j<arr[i];j++)
		{
			if(arr[i]%j==0)
			{
				//printf("%d\t",arr[i]);
				flag=1;
			}
		}
		if(flag==0 && arr[i]!=1)
		{
			printf("%d\t",arr[i]);
		}
		flag=0;
	}
}

