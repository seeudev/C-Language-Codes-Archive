#include <stdio.h>

int main(void) 
{
	int total = 0;
    int x,y,i=0;

    printf("Enter x: "); scanf("%d",&x);
    printf("Enter y: "); scanf("%d",&y);
	total = y;
	printf("Total: %d\n",y);
    while(total<x) 
    {
    	total += y;
        printf("Total: %d\n",total);
		
 
        
    }
    
    
    
}
