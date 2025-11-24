#include<stdio.h>

float convertToCm(float feet, float inches);

int main () {
    float x,y;
    scanf("%f %f",&x,&y);
    printf("%.2f",convertToCm(x,y));
}

float convertToCm(float feet, float inches){
    float res;
    res= (feet*30.48)+(inches*2.54);
    return res;
}
