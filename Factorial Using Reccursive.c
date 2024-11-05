#include<stdio.h>
 int fact(int n)
 {  if ( n==1)
  {
    return 1;
  }
     return n* fact(n-1);
 
 }
 void main()
 { 
    int n;
    printf(" Enter The Value Of n :");
    scanf("%d",&n);
    printf("Factorial = %d",fact(n));
 }
