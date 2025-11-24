#include<stdio.h>

int main () 
{
    char inp;
    int vowel;
    do
    {
        printf("Enter a character: "); scanf("\n%c",&inp);
        vowel = (inp == 'a' || inp == 'e' ||inp == 'i' ||inp == 'o' || inp == 'u' || inp == 'A' || inp == 'E' || inp == 'I' || inp == 'O' || inp == 'U');
        printf("%c\n",inp);
        
    }
    while(vowel != 1);
}
