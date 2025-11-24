#include<stdio.h>

int main ()
{
    int x,y,sum=0,i=0,cum=0;

    printf("Enter integer x: "); scanf("%d",&x);
    printf("Enter integer y: "); scanf("%d",&y);

    /*while(x<=y)
    {
    	sum = sum + x;
    	printf("%d\n",x);
    	printf(" sum %d\n",x);
        x += 1;
        ++i;
    }*/
    
    for(i=x;i<=y;i++)
    {
    	if(x%7==0)
    	{
    		continue;
		}
		else
		{
			printf("%d\n",x);
    		printf(" sum %d\n",x);
    		sum = sum + x;
        	x += 1;
		}
    	
	}
	printf("Sum of all numbers: %d",sum);
}
