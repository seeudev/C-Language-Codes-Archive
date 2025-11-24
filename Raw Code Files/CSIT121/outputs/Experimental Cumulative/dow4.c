#include<stdio.h>

int main () 
{
    int val, sum=0;

    printf("Enter an integer: \n");
    do
    {
        scanf("%d",&val);
        sum += val;
        //printf("%d",val);
    }
    while(val!=0);
    printf("Total Sum: %d",sum);
}
