/*
Q98: Print initials of a name with the surname displayed in full.
*/
#include <stdio.h>
#include <ctype.h>

int main() {
    char s[1000];
    scanf(" %999[^\n]", s);

    int len = 0;
    while (s[len] != '\0') len++;
    while (len > 0 && s[len - 1] == ' ') len--;   // ignore trailing spaces

    int lastStart = len;                           // start of the surname
    while (lastStart > 0 && s[lastStart - 1] != ' ') lastStart--;

    for (int i = 0; i < lastStart; i++) {
        if (s[i] != ' ' && (i == 0 || s[i - 1] == ' '))
            printf("%c. ", toupper((unsigned char)s[i]));
    }
    printf("%.*s\n", len - lastStart, s + lastStart);
    return 0;
}
