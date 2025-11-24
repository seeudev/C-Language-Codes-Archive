#include <stdio.h>
#include <string.h>
#include <ctype.h>
 
int main() {
    char input[100];
    int i,j,k,l;
    printf("Input a string in UPPERCASE: ");
    fgets(input, 100, stdin);
    for (i = 0; i < strlen(input); i++) {
        input[i] = tolower(input[i]);
    }
    printf("Here is the above string in lowercase: %s", input);

 
    char input2[100];
    printf("\nInput the string: ");
    fgets(input2, 100, stdin);
    char temp;
    for (i = 0, j = strlen(input2) - 2; i < j; i++, j--) {
        temp = input2[i];
        input2[i] = input2[j];
        input2[j] = temp;
    }
    printf("Inputted string in reverse order: %s", input2);
    int word_count = 1;
    for (i = 0; input2[i]; i++) {
        if (input2[i] == ' ') {
            word_count++;
        }
    }
    printf("\nTotal number of words in the string is: %d", word_count);
    int alpha_count = 0, digit_count = 0, special_count = 0;
    for (i = 0; input2[i]; i++) {
        if (isalpha(input2[i])) {
            alpha_count++;
        } else if (isdigit(input2[i])) {
            digit_count++;
        } else {
            special_count++;
        }
    }
    printf("\nNumber of Alphabets in the string is: %d", alpha_count);
    printf("\nNumber of Digits in the string is: %d", digit_count);
    printf("\nNumber of Special characters in the string is: %d", special_count);
    int vowel_count = 0, consonant_count = 0;
    for (i = 0; input2[i]; i++) {
        if (tolower(input2[i]) == 'a' || tolower(input2[i]) == 'e' || tolower(input2[i]) == 'i' || tolower(input2[i]) == 'o' || tolower(input2[i]) == 'u') {
            vowel_count++;
        } else if (isalpha(input2[i])) {
            consonant_count++;
        }
    }
    printf("\nNumber of Vowels in the string is: %d", vowel_count);
    printf("\nNumber of Consonants in the string is: %d\n", consonant_count);
    char text[100], pattern[20];
    printf("\nInput the text string: ");
    fgets(text, 100, stdin);
    printf("Input the pattern string: ");
    scanf("%s", pattern);
    char *ptr = text;
    int count = 0;
    while ((ptr = strstr(ptr, pattern)) != NULL) {
        for (i = 0; i < strlen(pattern); i++) {
            *ptr = toupper(*ptr);
            ptr++;
        }
        count++;
        ptr++;
    }
    printf("\nNew text:\n%s", text);
    printf("\nNumber of occurrence: %d", count);
    return 0;
}
