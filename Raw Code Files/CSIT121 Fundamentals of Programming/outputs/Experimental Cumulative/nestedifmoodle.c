#include<stdio.h>
int main(void){
	int num;
	scanf("%d", &num);
	if(num>0){
		printf("Positive!");
	if(num%2==0)
		printf("Even!");
	else
		printf("Odd!");
}
	else if(num<0)
		printf("Negative!");
	else
		printf("Zero!");
}
