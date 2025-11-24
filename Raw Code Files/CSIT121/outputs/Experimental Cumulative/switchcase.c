#include<stdio.h>
int main(void){
	int yearcode;
	scanf("%d", &yearcode);
	switch(yearcode){
		case 1: printf("Freshman"); break;
		case 2: printf("Sophomore"); break;
		case 3: printf("Junior"); break;
		case 4: printf("Senior"); break;
		default: printf("Error");
	}
}
