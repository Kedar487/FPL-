#include<stdio.h>
int main()
{ 
    int arr[5],i,sum=0;
    printf("Enter arry Elements :");
    for( i = 0; i < 5; i++)
    {
    scanf("%d",&arr[i]);   
    }
   
    for(i=0;i<5;i++)
    {
    sum=sum+arr[i];
    }

    printf("sum of Elements is %d",sum);
    return 0;
}