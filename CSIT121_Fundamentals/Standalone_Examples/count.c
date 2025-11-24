#include<stdio.h>

void printNumbers(int N)
{
 int i;
 for (i = 1; i <= N; i++) {
   printf("%d", i);
   if (i < N)
     printf(", ");
 }
    
}

int main()
{
    int num;
    printf("Enter an integer: "); scanf("%d",&num);
    printNumbers(num);
    
}
