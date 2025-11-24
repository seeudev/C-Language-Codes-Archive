#include<stdio.h>

int main () 
{
    int i=1,sum=0;
    while(i<=10) 
    {
    	//printf("%d",i);
        sum +=i;
        ++i;
        
    }
    
    printf("%d",sum);
}
