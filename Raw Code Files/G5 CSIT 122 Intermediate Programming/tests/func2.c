#include<stdio.h>

int computeSum(int num1, int num2); //returns the computed sum
int computeDifference(int num1, int num2); //returns the computed difference
int computeProduct(int num1, int num2);    //returns the computed product
float computeQuotient(int num1, int num2);    //returns the computed difference

int main () {
	char ope;
	int x,y;
	scanf("%c",&ope);
	scanf("%d %d",&x,&y);
	switch (ope){
		case '+':
			printf("Sum = %d",computeSum(x,y));
			break;
		case '-':
			printf("Difference = %d",computeDifference(x,y));
			break;
		case '*':
			printf("Product = %d",computeProduct(x,y));
			break;
		case '/':
			printf("Quotient = %.2f",computeQuotient(x,y));
			break;
		default:
			printf("Invalid operator!");
	}
}

int computeSum(int num1, int num2) {
	return num1+num2;
}
int computeDifference(int num1, int num2){
	return num1-num2;
}
int computeProduct(int num1, int num2){
	return num1*num2;
}
float computeQuotient(int num1, int num2){
	float res,f1,f2;
	f1=num1;
	f2=num2;
	res=f1/f2;
	return res;
}
