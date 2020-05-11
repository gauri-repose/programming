//Accept array from user and accept one number from user and return frequency of that number


#include<stdio.h>

int freq(int [],int,int);

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
	
	printf("Enter a number to search\n");
	scanf("%d",&num);
        ret=freq(arr,size,num);
	printf("frequency of your number is : %d",ret);
        return 0;
}

int freq(int arr[],int size,int num)
{
        int i=0,cnt=0;
         for(i=0;i<size;i++)
        {
		if(num==arr[i])
		{
			cnt++;
		}
        }
	 return cnt;

}

