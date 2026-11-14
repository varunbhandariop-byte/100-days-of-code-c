/*
Q88: Replace spaces with hyphens in a string.
*/
#include <stdio.h>

int main() {
    char s[1000];
    scanf(" %999[^\n]", s);
    for (int i = 0; s[i] != '\0'; i++)
        if (s[i] == ' ') s[i] = '-';
    printf("%s\n", s);
    return 0;
}
