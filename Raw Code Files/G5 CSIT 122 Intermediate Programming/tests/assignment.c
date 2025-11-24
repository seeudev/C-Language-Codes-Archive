#include <stdio.h>
#include <ctype.h>
#include <string.h> 
#include <conio.h> 

int countConsonants(char *str) {
    int count = 0;
    while (*str) {
        if (isalpha(*str) && !strchr("aeiouAEIOU", *str)) {
            count++;
        }
        str++;
    }
    return count;
}

int countWords(char *str) {
    int count = 0;
    int inWord = 0;
    while (*str) {
        if (isalpha(*str)) {
            if (!inWord) {
                inWord = 1;
                count++;
            }
        } else {
            inWord = 0;
        }
        str++;
    }
    return count;
}

int main() {
    char input[200]; 
    char ch;
    int i = 0;

    printf("Enter a string: ");
    while ((ch = getch()) != '\r' && i < sizeof(input) - 1) {
        printf("%c", ch);
        input[i++] = ch;
    }
    input[i] = '\0'; // Null-terminate the string

    printf("\n");

    int consonantCount = countConsonants(input);
    int wordCount = countWords(input);

    printf("\nNumber of consonants: %d\n", consonantCount);
    printf("\nNumber of words: %d\n", wordCount);

    return 0;
}
