#include<stdio.h>

int main ()
{
    int inp,i,modul,sum=0;
    printf("Enter an integer: "); scanf("%d",&inp);
    while(inp>0)
    {
        modul = inp%10;
        if(modul%3==0)
        {
            continue;
        }
        else
        {
            sum += modul;
            inp /= 10;
        }
    }
    printf("sum %d",sum);
}
