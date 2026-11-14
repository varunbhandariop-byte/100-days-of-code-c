/*
Q92: Find the first repeating lowercase alphabet in a string.
*/
#include <stdio.h>

int main() {
    char s[1000];
    scanf(" %999[^\n]", s);
    int freq[26] = {0};
    for (int i = 0; s[i] != '\0'; i++)
        if (s[i] >= 'a' && s[i] <= 'z') freq[s[i] - 'a']++;

    // first character (by position) that occurs more than once
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] >= 'a' && s[i] <= 'z' && freq[s[i] - 'a'] > 1) {
            printf("%c\n", s[i]);
            return 0;
        }
    }
    printf("No repeating character\n");
    return 0;
}
