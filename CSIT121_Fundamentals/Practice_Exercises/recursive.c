#include<stdio.h>
int factorial (int n);

int main(){
int i;
scanf("%d",&i);
printf("%d",factorial(i));
}
int factorial(int n){
if(n == 0 || n == 1){
	return 1;
}
else {
	return (n * factorial(n-1));
}
}
