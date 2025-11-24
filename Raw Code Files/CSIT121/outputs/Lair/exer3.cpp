#include<stdio.h>

float conv(int lb);

float conv(int lb)
{
    const float lbKg = 0.45392;
    float kg;
    kg = lb * lbKg;
    return kg;
}

int main()
{
    int X;
    scanf("%d",&X);
    printf("%.2f",conv(X));
}
