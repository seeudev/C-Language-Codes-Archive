#include<stdio.h>

int main () {

    float num1, num2,res;
    char ope;

    printf("Enter first number: "); scanf("%f",&num1);
    printf("Enter second number: "); scanf("%f",&num2);
    printf("Enter operation (+, -, *, or /): "); scanf("\n%c",&ope);

    switch (ope) {
        case '+':
            res = num1+num2;
            printf("Result: %.2f",res); break;
        case '-':
            res = num1-num2;
            printf("Result: %.2f",res); break;
        case '*':
            res = num1*num2;
            printf("Result: %.2f",res); break;
        case '/':
            res = num1/num2;
            printf("Result: %.2f",res); break;
        case '%':
            res = num1%num2;
            printf("Result: %.2f",res); break;
    }
}
