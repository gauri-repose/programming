//Accept array from user and display all the numbers which are even and greater than 30

#include<stdio.h>

void even_gt30(int [],int);

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

        even_gt30(arr,size);

        return 0;
}

void even_gt30(int arr[],int size)
{
        int i=0,temp=0,cnt=0;
         for(i=0;i<size;i++)
        {
                if((arr[i]%2==0) && (arr[i]>30))
                {
                        printf("%d\t",arr[i]);
                }
        }

}


