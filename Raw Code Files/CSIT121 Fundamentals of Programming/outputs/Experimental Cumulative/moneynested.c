#include<stdio.h>

int main () {

    int money;
    printf("Enter current pocket money: "); scanf("%d",&money);
    if (money>=0) {
    	if (money%10==7) {
        	printf("%d\n",money);
       		printf("Such lucky money!");
    		}
	
   		 else{
        printf("%d\n",money);
        printf("Just normal money.");
    		}
        }
    else if (money<0) 
           {
			printf("Stop lying, tell me what's in your pocket!"); } 
			
		}
