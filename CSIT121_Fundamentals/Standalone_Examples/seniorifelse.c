#include<stdio.h>

int main () {

    int age,year;
    printf("Enter your birth year: "); scanf("%d",&year);
    if (2022-year>=60) {
        printf("senior citizen");
    }
    else {
        printf("not senior citizen");
    }
}
