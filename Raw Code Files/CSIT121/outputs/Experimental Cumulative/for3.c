#include<stdio.h>

int main () 
{
    int n,i;

    printf("Enter an integer: "); scanf("%d",&n);

    for(i=1;n>=i;++i)
    {
        printf("*%d@\n",i);
    }
}
