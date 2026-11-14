/*
Q128: Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters.
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

    int vowels = 0, consonants = 0, c;
    while ((c = fgetc(fp)) != EOF) {
        if (isalpha(c)) {
            c = tolower(c);
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') vowels++;
            else consonants++;
        }
    }
    fclose(fp);

    printf("Vowels: %d\nConsonants: %d\n", vowels, consonants);
    return 0;
}
