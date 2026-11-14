/*
Q115: Write a program to take two strings s and t as inputs (assume all characters are lowercase). The task is to determine if s and t are valid anagrams, meaning they contain the same characters with the same frequencies. Print "Anagram" if they are, otherwise "Not Anagram".
*/
#include <stdio.h>

int main() {
    char s[1000], t[1000];
    scanf("%999s %999s", s, t);

    int freq[26] = {0};
    int i = 0, j = 0;
    for (; s[i] != '\0'; i++) freq[s[i] - 'a']++;
    for (; t[j] != '\0'; j++) freq[t[j] - 'a']--;

    int anagram = (i == j);
    for (int k = 0; anagram && k < 26; k++)
        if (freq[k] != 0) anagram = 0;

    if (anagram) printf("Anagram\n");
    else printf("Not Anagram\n");
    return 0;
}
