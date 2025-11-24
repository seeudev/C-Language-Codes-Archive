#include<stdio.h>

int main () 
{

    int i=0, inp, sum=0;
    printf("Enter a positive integer: "); scanf("%d",&inp);
    while (inp>=i) 
    {
        if (i%2==0) 
        {
            sum += i;
        }
        else {
            sum = sum;
        }
        //printf("%d",i);
        ++i;
        
        
        
    }
    printf("Sum of even numbers: %d",sum);
}
