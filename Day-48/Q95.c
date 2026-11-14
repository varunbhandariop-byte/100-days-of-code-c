/*
Q95: Check if one string is a rotation of another.
*/
#include <stdio.h>
#include <string.h>

int main() {
    char a[1000], b[1000], temp[2000];
    scanf("%999s %999s", a, b);

    if (strlen(a) != strlen(b)) {
        printf("Not a rotation\n");
        return 0;
    }
    // if b is a rotation of a, b appears inside a+a
    strcpy(temp, a);
    strcat(temp, a);
    if (strstr(temp, b) != NULL) printf("Rotation\n");
    else printf("Not a rotation\n");
    return 0;
}
