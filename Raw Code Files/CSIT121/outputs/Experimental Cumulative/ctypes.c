#include<stdio.h>
#include<ctype.h>


int main () {
    char x,y;
    printf("Enter first letter: "); scanf("%c",&x);
    printf("Enter second letter: "); scanf("\n%c",&y);
    printf("%c%c",x,y);
    printf("\n%c%c",toupper(x),toupper(y));
}
