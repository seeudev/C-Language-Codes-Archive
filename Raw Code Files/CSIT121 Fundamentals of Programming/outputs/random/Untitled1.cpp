#include<stdio.h>

int main ()
{
    int inp,teamOne=0,teamTwo=0;
    do
    {
        scanf("%d",&inp);
        if(inp==1)
        {
            ++teamOne;
        }
        else if(inp==2)
        {
            ++teamTwo;
        }
        else
        {
            break;
        }
    }while(1);
    if(teamOne>teamTwo)
    {
        printf("Team 1: %d goals\n",teamOne);
        printf("Team 2: %d goals\n",teamTwo);
        printf("Team 1 won!");
    }
    else if(teamTwo>teamOne)
    {
        printf("Team 1: %d goals\n",teamOne);
        printf("Team 2: %d goals\n",teamTwo);
        printf("Team 2won!");
    }
    else
    {
        printf("Team 1: %d goals\n",teamOne);
        printf("Team 2: %d goals\n",teamTwo);
        printf("Both tied!");
    }
    
}
