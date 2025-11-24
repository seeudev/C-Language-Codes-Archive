#include<stdio.h>

int main () {
    
    int inp;
    scanf("%d",&inp);
    if (inp%2==0 || inp==0) {
        printf("Even!");
    }
    else {
        printf("Odd!");
    }
}
