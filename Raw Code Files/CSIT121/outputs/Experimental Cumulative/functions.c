#include<stdio.h>


int add(int a, int b)
{
	return a + b;
}



int main ()
{
	int num1 = 20, num2 = 30, sum;
	
	sum = add(num1, num2);
	printf("%d",sum);
	
	
	int result = add(num1, 50);
	printf("\n%d",result);
	
}
