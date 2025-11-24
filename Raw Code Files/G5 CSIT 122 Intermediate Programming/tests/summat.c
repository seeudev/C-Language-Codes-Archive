#include<stdio.h>

int main () {
	 int ctr=1,x=0;

do{

      while(ctr<=3)  {

 	x+= 3;   printf("%d  ",x);

              ctr+=1; }

            x=x-7;

        printf("%d  ", x ); 

        ctr=2;

 }while (x != 0); 
}
