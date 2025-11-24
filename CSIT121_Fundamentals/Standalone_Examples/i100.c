#include <stdio.h>

int main(void) {
    int i;
    printf("Enter i: ");
    scanf("%d", &i);

    while (i<100) 
	{
        if (i%2 == 0) 
		{
            printf("%d\n", i);
        }
        //printf("%d\n",i);
        ++i;
    }
}
