/*
Q79: Perform diagonal traversal of a matrix.
*/
#include <stdio.h>

int main() {
    int r, c;
    scanf("%d %d", &r, &c);
    int a[r][c];
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++) scanf("%d", &a[i][j]);

    // each diagonal is the set of cells with the same (i + j)
    for (int s = 0; s <= r + c - 2; s++) {
        int start = (s - c + 1 > 0) ? s - c + 1 : 0;
        int end = (s < r - 1) ? s : r - 1;
        for (int i = start; i <= end; i++) printf("%d ", a[i][s - i]);
        printf("\n");
    }
    return 0;
}
