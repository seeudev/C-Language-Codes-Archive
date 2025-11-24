#include<stdio.h>
#include<math.h>
int main(void) {
    int total = 10;
    
    // Hey there, start typing your C code here...
    int num1,num2,skwir,kyub,exp;

    printf("Enter an integer: "); scanf("%d",&num1);
    if (num1>0) {
        if (num1%2 == 0 && num1>0) {
        skwir = pow(num1,2);
        total += skwir;
            printf("%d",total);
        }
        else {
            kyub = pow(num1,3);
            total += kyub;
            printf("%d",total);
        }
    }
    else if (num1 == 0) {
        printf("Nothing happened.");
    }
    else {
        printf("Input another integer: "); scanf("%d",&num2);
        exp = pow(num1,num2);
        total += exp;
        printf("%d",total);
        
    }
    
}
