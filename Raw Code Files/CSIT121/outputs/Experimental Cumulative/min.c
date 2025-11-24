#include <stdio.h>


void min(float a, float b, float c) {
    if (a<=b && a<=c) {
        printf("Minimum Value: %.3f",a);
    }
    else if (b<= a && b<=c) {

        printf("Minimum Value: %.3f",b);
	}
	else {
    printf("Minimum Value: %.3f",c);
	}
}
int main () {

    float a,b,c;
    printf("Enter first value: "); scanf("%f",&a);
    printf("Enter second value: "); scanf("%f",&b);
    printf("Enter third value: "); scanf("%f",&c);
    min(a,b,c);
    
}
