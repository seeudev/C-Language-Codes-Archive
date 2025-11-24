#include<stdio.h>

int main () {
    char inp;
    int blue,white, years;

    printf("Enter years of work: "); scanf("%d",&years);
    printf("Enter kind of work: "); scanf("\n%c",&inp);
    blue = (inp == 'B');
    white = (inp == 'W');
    if (blue) {
        if(years<2) {
            printf("Salary: 10,000");
        }
        else if (years<5) {
            printf("Salary: 12,000");
        }
        else if (years>=5) {
            printf("Salary: 15,000");
        }
    }
    else {
        if(years<2) {
            printf("Salary: 20,000");
        }
        else if (years<5) {
            printf("Salary: 40,000");
        }
        else if (years>=5) {
            printf("Salary: 75,000");
        }
    }
    
}
