#include<stdio.h>
#include<math.h>
int main () {

    int i=1,inp;
    printf("Enter a number: "); scanf("%d",&inp);

    while(inp>=i) {

        printf("%d\n",i*i);
        ++i;
    }
}
