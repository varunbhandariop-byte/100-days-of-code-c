/*
Q120: Write a program to take a string input. Change it to sentence case.
*/
#include <stdio.h>
#include <ctype.h>

int main() {
    char s[1000];
    scanf(" %999[^\n]", s);

    int newSentence = 1;   // 1 when the next letter starts a sentence
    for (int i = 0; s[i] != '\0'; i++) {
        if (isalpha((unsigned char)s[i])) {
            if (newSentence) {
                s[i] = toupper((unsigned char)s[i]);
                newSentence = 0;
            } else {
                s[i] = tolower((unsigned char)s[i]);
            }
        } else if (s[i] == '.' || s[i] == '!' || s[i] == '?') {
            newSentence = 1;
        }
    }
    printf("%s\n", s);
    return 0;
}
