//Accept array from user and display
//i/p = 4,5,3,2,6
//o/p = ****
//      #####
//      ###
//      **
//      ******

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
			if((arr[i]%2)==0)
			{
				printf("*");
			}
			else
			{
				printf("#");
			}
		}
		printf("\n");
	}

}

