#include <stdio.h>

int main(void) {
	int total = 50;
    int a,b,allt;
    // Hey there, start typing your C code here...
    printf("Enter first positive integer: "); scanf("%d",&a);
    printf("Enter second positive integer: "); scanf("%d",&b);
    if (b%2 == 0 && b>0) {
        total += b;
    }
    else {
        total -= b;
    }
    if(a%2 ==0 && a>0) {
        total += a;
    }
    else {
        total -= a;
    }
    printf("%d",total);
}
