#include<stdio.h>


int max(int a, int b, int c) {

    if (a>=b && a >= c) {
        return a;
    }
    else if (b>=a && b>=c) {
        return b;
    }
    else {
        return c;
    }
}

int main () {
    int a, b, c;
    printf("Enter first number: "); scanf("%d",&a);
    printf("Enter second number: "); scanf("%d",&b);
    printf("Enter third number: "); scanf("%d",&c);
    max(a,b,c);
    int maxVal;
    maxVal = max(a,b,c);
    printf("Maximum Value: %d",maxVal); 
    
}
