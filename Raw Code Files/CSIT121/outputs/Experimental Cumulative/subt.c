#include<stdio.h>


int main () 
{

    int remaining_value;
    int subtrahend;
    int new_remaining_value=1;

    printf("Enter a value: "); scanf("%d",&remaining_value);
    printf("\n");
    while(remaining_value>0) 
    {
        printf("Enter subtrahend: "); scanf("%d",&subtrahend);
        printf("%d - %d = ",remaining_value,subtrahend); 
		remaining_value -= subtrahend;
		printf("%d\n",remaining_value);
        
        
        
    }
    
}
