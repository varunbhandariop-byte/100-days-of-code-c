/*
Q125: Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.
*/
#include <stdio.h>

int main() {
    char filename[100], text[500];
    scanf("%99s", filename);
    scanf(" %499[^\n]", text);

    FILE *fp = fopen(filename, "a");
    if (fp == NULL) {
        printf("Error: could not open %s\n", filename);
        return 1;
    }
    fprintf(fp, "%s\n", text);
    fclose(fp);

    printf("Text appended successfully\n");
    return 0;
}
