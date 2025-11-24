#include<stdio.h>

int isDivisibleBy(int a, int b) {
    if (a%b == 0) {
        return 1;
    }
    else {
        return 0;
    }
}

int main () {

    int a,b,retv;

    printf("Enter first number: "); scanf("%d",&a);
    printf("Enter second number: "); scanf("%d",&b);
    isDivisibleBy(a,b);
    retv = isDivisibleBy(a,b);
    if (retv == 1) {
        printf("yes");
    }
    else {
        printf("no");
    }
    return 0;
    
}
