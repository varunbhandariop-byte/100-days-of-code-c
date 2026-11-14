/*
Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.
*/
#include <stdio.h>

int main() {
    char s[1000];
    scanf(" %999[^\n]", s);

    int last[256];
    for (int i = 0; i < 256; i++) last[i] = -1;

    int best = 0, start = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        unsigned char c = s[i];
        if (last[c] >= start) start = last[c] + 1;   // move window past the repeat
        last[c] = i;
        if (i - start + 1 > best) best = i - start + 1;
    }
    printf("%d\n", best);
    return 0;
}
