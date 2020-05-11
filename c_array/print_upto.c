//Accept array from user and display
//i/p = 7,2,5,3,9
//o/p = 1,2,3,4,5,6,7
//	1,2
//	1,2,3,4,5
//	1,2,3
//	1,2,3,4,5,6,7,8,9

#include<stdio.h>

void display(int [],int);

int main()
{
        int size=0,i=0;

        printf("enter size of array : \n");
        scanf("%d",&size);
	
	int arr[size];

        printf("enter elements in array\n");
        for(i=0;i<size;i++)
        {
                scanf("%d",&arr[i]);
        }

        display(arr,size);

        return 0;
}

void display(int arr[],int size)
{
        int i=0,j=0;
         for(i=0;i<size;i++)
        {
		for(j=1;j<=arr[i];j++)
		{
			printf("%d,",j);
		}
		printf("\n");
        }

}

