#include <stdio.h>
#include<string.h>


int main(void) {
	char str1[50] = "Hello CodeChum!";
    char str2[20];
    int inp;

    // Hey there, start typing your C code here...

    printf("Enter a string: "); gets(str2);
    printf("Enter an integer: "); scanf("%d",&inp);
    int length = strlen(str1), finlen;
    strcat(str1,str2);
	str1[length + inp] = '\0';
	printf("%s",str1);

}
