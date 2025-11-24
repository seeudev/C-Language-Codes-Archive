#include<stdio.h>

int main () {
    
    float purch,netB;
    
    scanf("%f",&purch);
    
    if(purch>=1000) {
        netB = purch - (purch*.1);
        printf("%.2f",netB);
    }
    else{
        printf("%.2f",purch);
    }
}
