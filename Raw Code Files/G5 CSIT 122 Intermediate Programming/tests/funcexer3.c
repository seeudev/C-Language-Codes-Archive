#include<stdio.h>
#include<math.h>

long sumDigit(long n);

int main () {
	long long x;
	scanf("%lld",&x);
	printf("Sum = %ld",sumDigit(x));
//	sumDigit(x);
}

long sumDigit(long n) {
	
	long temp=0,sum=0;
	while(1){
		temp = n%10;
		sum += temp;
		n = n/10;
		
//		printf("temp%d\n",temp);
//		printf("n%d\n",n);
		if(n==0){
			break;
		}
	}
//	printf("sum%d\n",sum);
	return sum;
}
