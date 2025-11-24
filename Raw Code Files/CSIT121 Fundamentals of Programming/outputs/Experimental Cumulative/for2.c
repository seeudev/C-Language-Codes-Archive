#include<stdio.h>

int main () 
{
    int n,i,j,k;

    printf("Enter n: "); scanf("%d",&n);
     printf("  ");
    for (i = 0; i <= n; ++i)
    {
    printf("%d ",i*j);
    
	}
	printf("\n");
	
	for (i = 0; i <= n; ++i) 
    {
    	//for(k=0; k<=n; ++k){
      	printf("%d",i);
	//}
    	printf(" ");
    	
      for(j=0;j<=n;j++)
     {
	  printf("%d ",i*j);
      }
     printf("\n");
    }
    
}
