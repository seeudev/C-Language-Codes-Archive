#include<stdio.h>

int main () {

    char inp;
    printf("Enter your grade: "); scanf("%c",&inp);

    switch(inp)
    {
        case 'A':
            printf("Good Job"); break;
        case 'B':
            printf("Good Job"); break;
        case 'C':
            printf("You're doing okay"); break;
        case 'D':
            printf("You need to study harder"); break;
        case 'F':
            printf("You need to study harder"); break;
        default:
            printf("Stop lying and tell me your actual grade"); break;
    }
}
