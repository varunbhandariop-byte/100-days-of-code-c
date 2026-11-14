/*
Q96: Reverse each word in a sentence without changing the word order.
*/
#include <stdio.h>

int main() {
    char s[1000];
    scanf(" %999[^\n]", s);
    int i = 0;
    while (s[i] != '\0') {
        if (s[i] == ' ') {
            printf(" ");
            i++;
            continue;
        }
        int start = i;
        while (s[i] != '\0' && s[i] != ' ') i++;
        for (int j = i - 1; j >= start; j--) printf("%c", s[j]);
    }
    printf("\n");
    return 0;
}
