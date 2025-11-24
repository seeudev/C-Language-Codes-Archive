#include<stdio.h>
#include<math.h>

float areaRect(float length, float width){
    float areaR = length * width;
    return areaR;
}

float periRect(float length, float width){
    float peri = 2 * (length + width);
    return peri;
}

float diagLine(float length, float width){
    float diag = sqrt(pow(length, 2) + pow(width, 2));
    return diag;
}

float areaTria(float length,float width){
    float areaT = (length * width) / 2;
    return areaT;
}

void display(float areaR, float peri, float diag, float areaT){
    printf("%.2f\n%.2f\n%.2f\n%.2f", areaR, peri, diag, areaT);
    return;
}

int main () {
	
	areaRect(12,8);
	perRect(12,8);
	display()
}
