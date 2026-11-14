/*
Q84: Convert a lowercase string to uppercase without using built-in functions.
*/
#include <stdio.h>

int main() {
    char s[1000];
    scanf(" %999[^\n]", s);
    for (int i = 0; s[i] != '\0'; i++)
        if (s[i] >= 'a' && s[i] <= 'z') s[i] = s[i] - 32;
    printf("%s\n", s);
    return 0;
}
