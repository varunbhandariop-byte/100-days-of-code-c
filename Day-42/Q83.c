/*
Q83: Count vowels and consonants in a string.
*/
#include <stdio.h>
#include <ctype.h>

int main() {
    char s[1000];
    scanf(" %999[^\n]", s);
    int vowels = 0, consonants = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        if (isalpha((unsigned char)s[i])) {
            char ch = tolower(s[i]);
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') vowels++;
            else consonants++;
        }
    }
    printf("Vowels: %d\nConsonants: %d\n", vowels, consonants);
    return 0;
}
