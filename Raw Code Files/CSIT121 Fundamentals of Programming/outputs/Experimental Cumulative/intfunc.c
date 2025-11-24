#include<stdio.h>

void getIntegers();


int main () {

    getIntegers();
}

void getIntegers() {
int num1,num2,num3;
    printf("Enter first integer: "); scanf("%d",&num1);
    printf("Enter second integer: "); scanf("%d",&num2);
    printf("Enter third integer: "); scanf("%d",&num3);
    printf("%d, %d, %d",num1,num2,num3);
}
