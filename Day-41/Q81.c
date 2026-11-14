/*
Q81: Count characters in a string without using built-in length functions.
*/
#include <stdio.h>

int main() {
    char s[1000];
    scanf(" %999[^\n]", s);
    int count = 0;
    while (s[count] != '\0') count++;
    printf("%d\n", count);
    return 0;
}
