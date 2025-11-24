#include<stdio.h>

int main () 
{
    int n,i;

    printf("Enter an integer n: "); scanf("%d",&n);
    printf("The values that are divisible by 3 from 1 to %d\n",n);
    for(i=3;n>=i;i+=3)
    {
        printf("%d\n",i);
    }
}
