#include<stdio.h>
#include<string.h>

int main () {
    char str[50], chara;
    printf("Enter a string: "); gets(str);
    printf("Enter a character: "); scanf("%c",&chara);
    char * result;
    result = strchr(str, chara);
    printf("%s",result);
    
}
