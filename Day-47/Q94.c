/*
Q94: Find the longest word in a sentence.
*/
#include <stdio.h>

int main() {
    char s[1000];
    scanf(" %999[^\n]", s);
    int bestStart = 0, bestLen = 0;
    int i = 0;
    while (s[i] != '\0') {
        while (s[i] == ' ') i++;
        int start = i;
        while (s[i] != '\0' && s[i] != ' ') i++;
        int len = i - start;
        if (len > bestLen) {
            bestLen = len;
            bestStart = start;
        }
    }
    printf("%.*s\n", bestLen, s + bestStart);
    return 0;
}
