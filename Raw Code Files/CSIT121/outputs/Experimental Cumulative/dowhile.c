#include<stdio.h>

int main () 
{

    int inp, i=0;

    printf("Enter an integer: "); scanf("%d",&inp);

    do 
    {
        inp /= 10;
        ++i;
    }
    while (inp!= 0);

    printf("Number of digits: %d",i);
}
