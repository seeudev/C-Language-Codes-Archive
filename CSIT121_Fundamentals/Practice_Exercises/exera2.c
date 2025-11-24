#include <stdio.h>
#include <stdlib.h>

int main(void){
	int size;
	scanf("%d",&size);
	int num[size];
	int i,ctr=0;
	for(i=0;i<size;i++){
		scanf("%d",&num[i]);
	}
	for(i=0;i<size;i++){
		if(num[i]%2==0 && num[i]%5==0){
			ctr++;
		}
	}
	printf("\n%d",ctr);
}

