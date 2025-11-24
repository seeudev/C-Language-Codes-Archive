#include<stdio.h>

int main () {
    
    
    float kwh, total;
    
    scanf("%f",&kwh);
    
    if (kwh<250) {
        printf("Kilowatt-hours: %.0f\n",kwh);
        printf("Electric bill: Php 82.50");
    }
    else {
        printf("Kilowatt-hours: %.0f\n",kwh);
        printf("Electric bill: Php 176.00");
    }
}
