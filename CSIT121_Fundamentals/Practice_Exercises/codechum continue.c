#include<stdio.h>

int main (){
    int inp,sum=0,rem;
    printf("Enter an integer: "); scanf("%d",&inp);
    while(inp!=0){
        rem=inp%10;
        if(inp%3==0){
            continue;
        }else{
            sum+=rem;
        }
        inp/=10;
    }
    printf("Sum of all digits: %d",sum);
}
