#include<stdio.h>
#include<conio.h>
int main(){
    int units = 0, total = 0 , extraUsed = 0;
    printf("\n ---Electricity bill charges are given below based on the consumptions----- ");
    printf("\n 1.For first 250 kilowatt-hour, electricity charge is 7.5P per unit ");
    printf("\n 1.For those user who are using above 250 kilowatt-hour, electricity charge is 8.5P additional kilowatt-hour");
    printf("\n 10% surtax for each");


    printf("\ Enter the units of electricity used by the user:");
    scanf("%d",&units);
    printf("\n Total electricity consumption is: %d",units);
    if(units <= 250){
      total=units*7.5;


    }else{


       extraUsed = units-250;
       total = units*7.5 + extraUsed*8.5;
    }
    total = total+total*0.1;
    printf("\ Total electricity bill is: %d",total);


return 0;
}
