#include<stdio.h>

int main () {
    int i,j;
    for(i=1;i<=6;i++){
        for(j=1;j<=6;j++){
        	
        	if(i==j){
        		printf(" 0 ");
			}
			else if(j>i){
				printf("-1 ");
			}
			else{
				printf(" 1 ");
			}
		}
		printf("\n");
    }
}
