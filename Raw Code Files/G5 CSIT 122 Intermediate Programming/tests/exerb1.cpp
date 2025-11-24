#include <stdio.h>
#include <stdlib.h>
#define size 15

int main(void){
	char inp[size];
	int i,ctr=0;
	scanf("%s",inp);
	for(i=0;i<size;i++){
		if(inp[i]=='a' || inp[i]=='e' || inp[i]=='i' || inp[i]=='o' || inp[i]=='u' || inp[i]=='A' || inp[i]=='E' || inp[i]=='I' || inp[i]=='O' ||inp[i]=='U')
		{
			ctr++;
			printf("%c\n",inp[i]);
		}
	}
	printf("%d",ctr);
}

