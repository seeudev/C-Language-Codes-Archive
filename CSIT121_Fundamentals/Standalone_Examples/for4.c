#include<stdio.h>

int main () 
{
    int n,i,k=1;

    printf("Enter an integer: "); scanf("%d",&n);

    for(i=0;n>i;++i)
    {
        printf("%d ",k+=i);
    }
}
