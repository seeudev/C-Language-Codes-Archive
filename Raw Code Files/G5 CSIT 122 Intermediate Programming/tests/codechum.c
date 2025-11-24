#include<stdio.h>
#include<math.h>

int main (){
	int inp;
	int digit,sum=0,ctr=0,count,loopd=0,flag;
	printf("Enter a positive integer: "); scanf("%d",&inp);
	flag=inp;
	count=inp;
	do {
    count/=10;
    ctr++;
//    printf("count %d",count);
  	} while (count != 0);
	do{
		digit=inp%10;
		sum+=(pow(digit,ctr));
		inp/=10;
		loopd++;
	}while(loopd<ctr);
//	printf("Sum: %d",sum);
	if(flag==sum){
		printf("%d is an Armstrong number",flag);
	}else{
		printf("%d is not an Armstrong number",flag);
	}
}
