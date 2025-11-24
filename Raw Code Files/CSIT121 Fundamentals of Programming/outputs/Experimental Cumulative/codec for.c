#include<stdio.h>

int main ()

{
    int i=0;
    printf("Enter a number: "); scanf("%d",&i);

    for(i;i>=0;--i) {
        printf("%d\n", i);
    }
}
