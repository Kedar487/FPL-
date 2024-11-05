#include<stdio.h>

int main() {
  int n, reverse = 0, remainder, original;

  printf("Enter an integer: ");
  scanf("%d", &n);

  original = n;  

  while (n != 0) {
    remainder = n % 10;
    reverse = reverse * 10 + remainder;
    n /= 10;
  }
      printf("Reversed number = %d", reverse);

}