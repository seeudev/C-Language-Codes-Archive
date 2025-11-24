#include<stdio.h>

int main ()
{

    int x,y,z,i;

    printf("Enter an integer for x: "); scanf("%d",&x);
    printf("Enter an integer for y: "); scanf("%d",&y);
    printf("Enter an integer for z: "); scanf("%d",&z);
    printf("%d",x);
    for(i=x+z;i<=y;i+=z)
    {
        printf(", %d",i);
    }
}
