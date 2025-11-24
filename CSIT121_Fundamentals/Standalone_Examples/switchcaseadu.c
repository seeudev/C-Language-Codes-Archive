#include<stdio.h>

int main () {

    char inp;
    printf("Please enter age category: "); scanf("%c",&inp);

    switch(inp)
    {
        case 'B':
            printf("Baby = P0.00"); break;
        case 'T':
            printf("Teenager = P2000.00"); break;
        case 'A':
            printf("Adult = P15000.00"); break;
        case 'S':
            printf("Senior Citizen = P4000.00"); break;
    }
}
