#include<stdio.h>

void printHelloWorld();

int main(void) {

int inp, i;
    printf("Enter an integer: "); scanf("%d",&inp);
    for (i = 1; i <= inp; i++){
        printHelloWorld();
    }
}

void printHelloWorld() {
  printf("Hello World\n");
}
