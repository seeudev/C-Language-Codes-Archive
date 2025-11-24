#include<stdio.h>

int main ()
{
    float uload, tuition, uloadperc;
    scanf("%f",&uload);
    //process
    uloadperc = (uload* 45)*(.15);
    tuition = (uload*45)+uloadperc+200;
    printf("Tuition fee: Php %.2f",tuition);
}
