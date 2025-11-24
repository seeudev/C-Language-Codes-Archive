#include <stdio.h>

void reverseInt(int n) {
    int reverse = 0, remainder;
    while (n != 0) {
    remainder = n % 10;
    reverse = reverse * 10 + remainder;
    n /= 10;
  }
    printf("%d", reverse);
}



int main() {

  int n, reverse = 0, remainder;

  printf("Enter an integer: ");
  scanf("%d", &n);
  reverseInt(n);

  



  return 0;
}
