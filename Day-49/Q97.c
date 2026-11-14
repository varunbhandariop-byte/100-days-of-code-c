/*
Q97: Print the initials of a name.
*/
#include <stdio.h>
#include <ctype.h>

int main() {
    char s[1000];
    scanf(" %999[^\n]", s);
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] != ' ' && (i == 0 || s[i - 1] == ' '))
            printf("%c.", toupper((unsigned char)s[i]));
    }
    printf("\n");
    return 0;
}
