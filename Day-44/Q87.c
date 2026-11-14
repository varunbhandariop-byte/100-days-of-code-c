/*
Q87: Count spaces, digits, and special characters in a string.
*/
#include <stdio.h>
#include <ctype.h>

int main() {
    char s[1000];
    scanf(" %999[^\n]", s);
    int spaces = 0, digits = 0, special = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == ' ') spaces++;
        else if (isdigit((unsigned char)s[i])) digits++;
        else if (!isalpha((unsigned char)s[i])) special++;
    }
    printf("Spaces: %d\nDigits: %d\nSpecial characters: %d\n", spaces, digits, special);
    return 0;
}
