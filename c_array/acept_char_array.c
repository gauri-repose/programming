//write a program which accept characters  and print it

#include<stdio.h>
void print_char_array(char [],int);

int main()
{
        int size=0,i=0;
        char arr[size];

        printf("enter how many elements do you want\n");
        scanf("%d",&size);

        printf("enter array elements\n");

        for(i=0;i<size;i++)
        {
                scanf("%c",&arr[i]);
        }

        print_char_array(arr,size);

        return 0;
}

void print_char_array(char arr[],int size)
{
        int i=0;
        printf("array elements are\n");
        for(i=0;i<size;i++)
        {
                printf("%c\t",arr[i]);
        }
}

