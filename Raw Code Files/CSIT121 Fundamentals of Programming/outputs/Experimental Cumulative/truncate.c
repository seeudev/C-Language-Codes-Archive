#include <stdio.h>
#include <string.h>

int main(void)
{
    char string[] = "one one two three five eight thirteen twenty-one";

    printf("%s\n", string);

    string[strlen(string) - 3]  = '\0';

    printf("%s\n", string);

    return 0;
}
