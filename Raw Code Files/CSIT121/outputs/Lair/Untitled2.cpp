#include<stdio.h>

int revNumFunction(int n);

int revNumFunction(int n)
{
    int remainder=0, reverse=0;
     while (n != 0) {
    remainder = n % 10;
    reverse = reverse * 10 + remainder;
    n /= 10;
  }
  return reverse;
}

int main()
{
    int N;
    scanf("%d",&N);
    printf("%d",revNumFunction(N));
}
