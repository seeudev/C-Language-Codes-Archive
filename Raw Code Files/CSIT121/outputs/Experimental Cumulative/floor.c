#include <stdio.h>
#include <math.h>

int main() {
	float inp;
    printf("Enter a decimal number: "); scanf("%f",&inp);
    int result;
    result = floor(inp);
    printf("%d",result);
}
