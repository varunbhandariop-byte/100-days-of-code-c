/*
Q89: Count frequency of a given character in a string.
*/
#include <stdio.h>

int main() {
    char s[1000], ch;
    scanf(" %999[^\n]", s);
    scanf(" %c", &ch);
    int count = 0;
    for (int i = 0; s[i] != '\0'; i++)
        if (s[i] == ch) count++;
    printf("%d\n", count);
    return 0;
}
