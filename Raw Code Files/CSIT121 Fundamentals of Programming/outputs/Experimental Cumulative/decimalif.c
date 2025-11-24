#include<stdio.h>

int main () {

    float a,b,c,ab;

    printf("Enter first decimal: "); scanf("%f",&a);
    printf("Enter second decimal: "); scanf("%f",&b);
    printf("Enter third decimal: "); scanf("%f",&c);
    printf("%.2f %.2f ",a,b);
    ab = a + b;
    if (ab<c) {
        printf("%.2f",c);
    }
}
