/*
Q86: Check if a string is a palindrome.
*/
#include <stdio.h>

int main() {
    char s[1000];
    scanf(" %999[^\n]", s);
    int len = 0;
    while (s[len] != '\0') len++;

    int isPal = 1;
    for (int i = 0; i < len / 2; i++)
        if (s[i] != s[len - 1 - i]) {
            isPal = 0;
            break;
        }

    if (isPal) printf("Palindrome\n");
    else printf("Not a Palindrome\n");
    return 0;
}
