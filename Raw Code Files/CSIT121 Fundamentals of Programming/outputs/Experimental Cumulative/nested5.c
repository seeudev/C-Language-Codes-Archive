#include<stdio.h>

int main () 
{
    int n,y,i,k;
    printf("Enter number of weeks: "); scanf("%d",&n);

    for(k=1;n>=k;++k)
    {
    	printf("Week#%d\n",k);
			for(i=1;i<=7;++i)
        {
            printf("  Day %d\n",i);
        }
        printf("\n");
		}
        
}
