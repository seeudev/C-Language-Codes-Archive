#include <stdio.h>

void changeValue(int *ptr) { // Accepts a pointer as a formal parameter
	*ptr = 20; // Changes made to the value pointed by ptr
}

int main() {
	int num = 10;
	printf("%d\n",num);
	changeValue(&num); // Passing num by reference
	
	printf("Value after function call: %d\n", num);
	
	return 0;
}
