#include<stdio.h>

int main(void) 
{
	int n, lean;
    do 
    {
        printf("Enter value: ");
        scanf("%d", &n);
        lean = (n%3 == 0 && n%5 == 0);
    } 
	while(lean != 1);

    return 0;
}
