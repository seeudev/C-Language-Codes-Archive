#include<stdio.h>

int main () {
    int sum=0,inp,max,flag=0;
    printf("Enter target value: "); scanf("%d",&max);
    printf("Enter the values:\n");
    do{
        scanf("%d",&inp);
        if(inp<0){
        	break;
		}
		else{
			sum+=inp;
		}
    }while(max>sum);
    printf("Sum: %d",sum);
}
