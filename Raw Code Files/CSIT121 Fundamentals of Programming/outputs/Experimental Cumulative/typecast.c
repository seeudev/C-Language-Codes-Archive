#include<stdio.h>

int main () {

    float num1, num2, resultfl;

    printf("Enter first number: "); scanf("%f",&num1);
    printf("Enter second number: "); scanf("%f",&num2);
    resultfl = num1 + num2;
    int resultin = (int)resultfl;
    printf("%d", resultin);
    
}
