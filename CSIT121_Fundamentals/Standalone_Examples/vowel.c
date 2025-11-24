#include<stdio.h>

int main () {

    int vowel;
    char inp;
    printf("Enter a single character: "); scanf("%c",&inp);
    printf("%c\n",inp);
    vowel = (inp == 'a' || inp == 'e' || inp == 'i' || inp == 'o' || inp == 'u' || inp == 'A' || inp == 'E' || inp == 'I' || inp == 'O' || inp == 'U');
    if (vowel) {
        printf("vowel");
    }
}
