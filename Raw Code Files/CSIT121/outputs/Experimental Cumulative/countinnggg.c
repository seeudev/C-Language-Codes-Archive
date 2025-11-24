#include<stdio.h>

void printNumbers()
{
 int i;
 int num;
    printf("Enter an integer: "); scanf("%d",&num);
 for (i = 1; i <= num; i++) {
   printf("%d", i);
   if (i < num)
     printf(", ");
 }
    
}

int main()
{
    
    printNumbers();
    
}
