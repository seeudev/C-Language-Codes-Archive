#include<stdio.h>

int main() {
  int n=6,i,j;
  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) 
	{	if(j==i)
    	{	printf(" 0 ");
		}
		else if (j<i)
		{	printf(" 1 ");
		}
		else{
			printf("-1 ");
		}
		
    }
    printf("\n");
  }
  return 0;
}
