#include<stdio.h>

int main (){
	int n,i=0,fib=0,nextTerm=1,t1=1,t2=1;
	printf("Enter n: "); scanf("%d",&n);
	printf("Fibonacci numbers = 1 "); 
	
	for (i = 2; i <= n; ++i) {
    printf("%d ", nextTerm);
    t1 = t2;
    t2 = nextTerm;
    nextTerm = t1 + t2;
  }
}
