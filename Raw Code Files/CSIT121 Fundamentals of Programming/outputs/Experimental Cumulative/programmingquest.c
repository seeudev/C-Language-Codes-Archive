#include<stdio.h>

int main () {
    int ans;
    char webd,framew;
    printf("Choose the programming language you like best: "); scanf("%d",&ans);
    if (ans == 5) {
        printf("You like Python best\n");
        printf("Enter type of development: "); scanf("\n%c",&webd);
        if (webd == 'C') {
            printf("Backend\n");
            printf("Do you know any frameworks? "); scanf("\n%c",&framew);
            if(framew=='Y' || framew=='y') {
                printf("Wow, you're good!");
            }
            
        }
        else if(webd=='A'){
            printf("Web");
        }
        else if(webd=='B'){
            printf("Data Analytics");
        }
        
    }
    else if (ans ==1) {
        printf("You like C best");
    }
    else if (ans ==2) {
        printf("You like C++ best");
    }
    else if (ans ==3) {
        printf("You like Java best");
    }
    else if (ans ==4) {
        printf("You like C# best");
    }
}
