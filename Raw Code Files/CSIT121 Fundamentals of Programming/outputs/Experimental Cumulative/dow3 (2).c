#include<stdio.h>

int main () 
{
    int max, val, sum=0, lean = 0;

    printf("Enter target value: "); scanf("%d",&max);
	printf("Enter the values:\n");
    do
    {
    	scanf("%d",&val);
        if(val == -1)
        {
        	sum = sum;
        	lean = -1;
		}
		else
		{
		if (sum>=max) 
			{
        		lean = -1;
			}
		else 
		{
			sum += val;
			if (sum>=max) 
			{
        		lean = -1;
			}
		}
        
        //printf(" sum %d\n",sum);
        //printf(" val %d\n",val);	
    	}
    }
    while(lean != -1);
    printf("Sum: %d",sum);
}
