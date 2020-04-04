//Accept marks obtained and total marks from user out of 1000 and calcuate its percentage
//i/p : 765
//o/p : "percentage is : 76.5"

#include<stdio.h>
float percentage(int,int);
int main()
{
        int marks=0;
	float per,ans=0.0f;
	int total=1000;

        printf("enter marks\n");
        scanf("%d",&marks);

        ans=percentage(marks,total);

	printf("prcentage is : %.2f%%",ans);
}

float percentage(int marks,int total)
{
	return ((float)marks/(total))*100;
}
