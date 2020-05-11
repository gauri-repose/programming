//accept array from user and display numbers which has 7 in it

#include<stdio.h>
void chk_digit(int [],int);

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
        chk_digit(arr,size);
        return 0;
}

void chk_digit(int arr[],int size)
{
        int i=0,temp=0,rev=0,flag=0;

        for(i=0;i<size;i++)
        {
                temp=arr[i];
                while(temp!=0)
                {
                        if((temp%10)==7 && flag==0)
			{
				printf("%d\t",arr[i]);
				flag=1;
			}
                        temp/=10;
                }
		flag=0;
        }

}

