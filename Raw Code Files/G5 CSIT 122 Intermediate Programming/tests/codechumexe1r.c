#include<stdio.h>
int global=0;
void increment(void);

int main () {
    
    while(global<15){
		increment();
        if(global%3==0&&global>0){
            printf("Cody!\n");
        }else{
            printf("%d\n",global);
        }
        
    }
}
void increment(void){
    global++;
}
