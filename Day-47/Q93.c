/*
Q93: Check if two strings are anagrams of each other.
*/
#include <stdio.h>

int main() {
    char a[1000], b[1000];
    scanf("%999s %999s", a, b);
    int freq[256] = {0};
    int i = 0;
    for (; a[i] != '\0'; i++) freq[(unsigned char)a[i]]++;
    int j = 0;
    for (; b[j] != '\0'; j++) freq[(unsigned char)b[j]]--;

    int anagram = (i == j);
    for (int k = 0; anagram && k < 256; k++)
        if (freq[k] != 0) anagram = 0;

    if (anagram) printf("Anagrams\n");
    else printf("Not Anagrams\n");
    return 0;
}
