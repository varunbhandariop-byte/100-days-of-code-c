/*
Q123: Read a text file and count the total number of characters, words, and lines. A word is defined as a sequence of non-space characters separated by spaces or newlines.
*/
#include <stdio.h>
#include <ctype.h>

int main() {
    char filename[100];
    scanf("%99s", filename);

    FILE *fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error: could not open %s\n", filename);
        return 1;
    }

    int chars = 0, words = 0, lines = 0, inWord = 0, last = '\n';
    int c;
    while ((c = fgetc(fp)) != EOF) {
        chars++;
        if (c == '\n') lines++;
        if (isspace(c)) inWord = 0;
        else if (!inWord) {
            inWord = 1;
            words++;
        }
        last = c;
    }
    if (chars > 0 && last != '\n') lines++;   // last line without a trailing newline
    fclose(fp);

    printf("Characters: %d\nWords: %d\nLines: %d\n", chars, words, lines);
    return 0;
}
