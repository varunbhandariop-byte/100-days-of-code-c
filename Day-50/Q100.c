/*
Q100: Print all sub-strings of a string.
*/
#include <stdio.h>

int main() {
    char s[1000];
    scanf(" %999[^\n]", s);
    int len = 0;
    while (s[len] != '\0') len++;

    for (int i = 0; i < len; i++)
        for (int j = i; j < len; j++)
            printf("%.*s\n", j - i + 1, s + i);
    return 0;
}
