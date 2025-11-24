#include<stdio.h>

int main(void) {
    int n;
    int modul;
    printf("Enter integer value: ");
    scanf("%d", &n);
    while(1)
    {    modul = n%10;
         if(modul%4==0){
             printf("%d\n",modul);
             break;
         }
        else
            {printf("%d\n",modul);

            n/=10;
            //n-=(modul*.1);
            //printf(" n %d\n",n);
            
        }
         //n1 = n%10;
         //n2 = ((n/10)-(n1*.1))%10;m
         //n3 = ((((n/10)-(n1*.1))/10)-n2*.1)%10;
         //n4 = ((((((n/10)-(n1*.1))/10)-n2*.1)/10)-n3*.1)%10;
    }
    return 0;
}
