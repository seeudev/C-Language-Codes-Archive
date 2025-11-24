#include<stdio.h>

int computeTotal(int n);

int computeTotal(int n)
{
    int sum=0,i=1;
    while(n>=i)
    {
    if(i%3==0 && i>0)
    {
        sum = sum +i;
    }
    else
    {
        sum = sum;
    }
    ++i;
    }
    return sum;
}

int main () {
    
    int N;
    scanf("%d",&N);
    printf("%d",computeTotal(N));
}
