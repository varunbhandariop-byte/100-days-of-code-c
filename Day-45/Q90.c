/*
Q90: Toggle case of each character in a string.
*/
#include <stdio.h>

int main() {
    char s[1000];
    scanf(" %999[^\n]", s);
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] >= 'a' && s[i] <= 'z') s[i] -= 32;
        else if (s[i] >= 'A' && s[i] <= 'Z') s[i] += 32;
    }
    printf("%s\n", s);
    return 0;
}
