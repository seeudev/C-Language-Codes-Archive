#include<stdio.h>

int main () {
    int time,hour,min;
    char ampm;
    printf("Enter time in 12-hour format (e.g. 5:30 PM): "); scanf("%d:%d%cM",&hour,&min,&ampm);
    if(ampm=='A'||ampm=='a'){
        if(hour<12){
            printf("24-hour format: 0%d:%2d",hour,min);
        }else{
            printf("24-hour format: %2d:%2d",hour,min);
        }
	}else{
		printf("24-hour format: %2d:%2d",hour+12,min);
	}

    
}
