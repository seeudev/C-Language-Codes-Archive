#include<stdio.h>

int main () {
    int i=1,j=0;
    do{
        for(j=1;j<=10;j++){
        	printf("%3d",i*j);
		}
		i++;
		printf("\n");
    }while(i<=10);
}
