/*
Q124: Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().
*/
#include <stdio.h>

int main() {
    char src[100], dest[100];
    scanf("%99s %99s", src, dest);

    FILE *in = fopen(src, "r");
    if (in == NULL) {
        printf("Error: could not open %s\n", src);
        return 1;
    }
    FILE *out = fopen(dest, "w");
    if (out == NULL) {
        printf("Error: could not create %s\n", dest);
        fclose(in);
        return 1;
    }

    int c;
    while ((c = fgetc(in)) != EOF) fputc(c, out);

    fclose(in);
    fclose(out);
    printf("File copied successfully\n");
    return 0;
}
