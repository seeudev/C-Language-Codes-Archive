#include<stdio.h>

int factorial(int n);

int factorial(int n)
{
    int fac;
    if(n<=1)
    {
        fac=1;
    }
    else if(n>1)
    {
        fac = n*factorial(n-1);
    }
    else
    {
        fac =1;
    }
    return fac;
}
 int main ()
 {
     int N;
     scanf("%d",&N);
     printf("%d",factorial(N));
 }
