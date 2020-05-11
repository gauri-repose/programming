//write a program that accepts an array of numbers and a number and return index of element

#include<stdio.h>

int array_search(int [],int,int);

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

	printf("enter a element to search\n");
	scanf("%d",&num);

        ret=array_search(arr,size,num);

	printf("index of your element is : %d\n",ret);
        return 0;
}

int array_search(int arr[],int size,int num)
{
        int i=0,cnt=0;
         for(i=0;i<size;i++)
        {
        	if(num==arr[i])
		{
			return i+1;
		}
        }

}


