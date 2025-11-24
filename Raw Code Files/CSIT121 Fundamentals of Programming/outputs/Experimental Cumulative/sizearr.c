#include<stdio.h>


void average(float a, float b) {
    float average = a/b;
    printf("Average: %.2f",average);
}

int main () {

    int a, sum = 0,sizearr, i;

    printf("Enter size of array: "); scanf("%d",&sizearr);
    int arr[sizearr];
    printf("Enter the numbers: ");
    for (i=0; i < sizearr; ++i) {
        scanf(" %d",&arr[i]);
        sum += arr[i];
        
    }
	average((float)sum,(float)sizearr);
	
    
    
}
