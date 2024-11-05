#include <stdio.h>
int main() 
{
    int num, a , i, sum = 0;
    printf("Enter a three-digit integer: ");
    scanf("%d", &num);
    i = num;

    while (num != 0) {
    
     a = num % 10;
        
    sum= sum + a * a * a;
    
    num = num/10;
    }
    if (sum == i)
    {
        printf("Number is armstrong");
    }
    else
        printf("Number is not armstrong");

    return 0;
}