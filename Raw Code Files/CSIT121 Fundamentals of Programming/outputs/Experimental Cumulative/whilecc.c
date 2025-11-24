#include<stdio.h>

int main ()
{
    int i, inp=0,lean=0;

    printf("Enter a number: "); scanf("%d",&inp);

    while(lean!=1) 
	{
		++inp;
		if (inp%3==0 || inp%5==0 || inp%7==0) 
		{
			lean = 1;
			
		}
		//printf("%d\n",inp);
		
		
    }

    printf("Final value of n: %d",inp);
}
