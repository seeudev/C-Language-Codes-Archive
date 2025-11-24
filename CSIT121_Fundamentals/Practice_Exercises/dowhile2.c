#include<stdio.h>

int main (){
    int x,y=0,z=0,flag=0;
    do{
        scanf("\n%d",&x);
        if(x==1){
            y++;
        }
        else if (x==2){
            z++;
        }
        else if (x==0){
            break;
        }
        else{
            printf("Invalid score...repeat again!");
            flag=1;
            break;
        }
        
        
        
        
    }while(x!=0);
    if(flag=0){
        printf("Team 1 score: %d\nTeam 2 score: %d",y,z);
    
    if(y>z){
        printf("\nTeam 1 Won!!!");
    }
    else if (z>y) {
        printf("\nTeam 2 Won!!!");
    }
    else if (z==0&&y==0){
        printf("\nNobody Wins!!!");
    }
    else {
        printf("\nBoth Teams Tied!!!");
    }
    }
    
}
