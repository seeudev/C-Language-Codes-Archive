#include <stdio.h>

int main(void) {
	char str1[50], str2[50];

    printf("Enter the first string: ");
    scanf("%s", str1);
    printf("Enter the second string: ");
    scanf("%s", str2);

    if (strcmp(str1,str2) >= 0 && strcmp(str1,str2) != 0) {
        printf("They are not equal.");
        
    }
    else{
        printf("They are equal.");
    }
}
