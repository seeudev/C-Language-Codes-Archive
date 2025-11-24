#include <stdio.h>
#include <stdlib.h>
#define size 15

int main(void){
	int num[size];
	int i;
	for(i=0;i<size;i++){
		num[i]=i;
	}
	for(i=0;i<size;i++){
		printf("%d\n",num[i]*3);
	}

}

