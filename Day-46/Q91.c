/*
Q91: Remove all vowels from a string.
*/
#include <stdio.h>
#include <ctype.h>

int main() {
    char s[1000];
    scanf(" %999[^\n]", s);
    for (int i = 0; s[i] != '\0'; i++) {
        char ch = tolower(s[i]);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') continue;
        printf("%c", s[i]);
    }
    printf("\n");
    return 0;
}
