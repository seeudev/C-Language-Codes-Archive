#include<stdio.h>

long sumDigit(char n);

int main () {
	char n[1000];
	scanf("%s", n);
	sumDigit(n);
}

long sumDigit(char n) {
	int c, sum, t;
   char x[1000];
   
   
 
   sum = c = 0;
   
   while (x[c] != '\0') {
      t   = x[c] - '0'; // Converting character to integer
      sum = sum + t;
      c++;
   }
   
   printf("Sum = %d",sum);
}
