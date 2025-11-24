#include<stdio.h>

int main ()
{
    int x,y,i;

    printf("Enter the value of x: "); scanf("%d",&x);
    printf("Enter the value of y: "); scanf("%d",&y);

    for(i=x;i<=y;++i)
    {
    	
        
		if(i%5==0) 
        {
            printf("%d Divisible by 5 spotted!\n",i);
        }
        else
        {
        	printf("%d\n",i); 
		}
        
    }
}
