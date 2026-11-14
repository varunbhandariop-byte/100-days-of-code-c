/*
Q76: Check if a matrix is symmetric.
*/
#include <stdio.h>

int main() {
    int r, c;
    scanf("%d %d", &r, &c);
    int a[r][c];
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++) scanf("%d", &a[i][j]);

    int symmetric = (r == c);
    for (int i = 0; symmetric && i < r; i++)
        for (int j = 0; j < c; j++)
            if (a[i][j] != a[j][i]) {
                symmetric = 0;
                break;
            }

    if (symmetric) printf("Symmetric\n");
    else printf("Not Symmetric\n");
    return 0;
}
