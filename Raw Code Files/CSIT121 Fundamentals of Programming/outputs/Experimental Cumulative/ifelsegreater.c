#include<stdio.h>


int main () {

    int a,b,c,ab;
    printf("Enter a: "); scanf("%d",&a);
    printf("Enter b: "); scanf("%d",&b);
    printf("Enter c: "); scanf("%d",&c);
    ab = a + b;
    printf("%d + %d > %d = ",a,b,c);
    if (ab>c) {
        printf("yes");
    }
    else {
        printf("no");
    }
}
