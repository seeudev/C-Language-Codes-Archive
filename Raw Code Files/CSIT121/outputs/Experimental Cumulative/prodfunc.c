#include<stdio.h>

float computeSumOfNumbers();
    
int main(void) {
    float res;
computeSumOfNumbers();
    
    
}

float computeSumOfNumbers() {
  float a, b, c;

  printf("Enter first number: ");

  scanf("%f", &a);

  printf("Enter second number: ");

  scanf("%f", &b);

  printf("Enter third number: ");

  scanf("%f", &c);

    float result = a+b+c;
    
    printf("%.2f",result);
    return result;

}
