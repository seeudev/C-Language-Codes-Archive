#include<stdio.h>

int main () 
{
    int n,y,i,k;
    printf("Enter n: "); scanf("%d",&n);
    printf("Enter y: "); scanf("%d",&y);

    for(k=1;n>=k;++k)
    {
    	if(k==y)
    	{

		}
		else
		{
			for(i=1;n>=i;++i)
        {
            printf("*");
        }
		}
        
    printf("\n");
    }
}
