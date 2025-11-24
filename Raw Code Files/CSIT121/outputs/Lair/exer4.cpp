#include<stdio.h>

int findMax(int x, int y, int z);

int findMax(int x, int y, int z)
{
    if (x>y && x>z)
    {
        return x;
    }
    else if (y>x && y>z)
    {
        return y;
    }
    else
    {
        return z;
    }
}

int main ()
{
    int X,Y,Z;
    scanf("%d %d %d",&X,&Y,&Z);
    printf("The largest integer is %d",findMax(X,Y,Z));
}
