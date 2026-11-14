/*
Q73: Find the sum of each row of a matrix and store it in an array.
*/
#include <stdio.h>

int main() {
    int r, c;
    scanf("%d %d", &r, &c);
    int rowSum[r];
    for (int i = 0; i < r; i++) {
        rowSum[i] = 0;
        for (int j = 0; j < c; j++) {
            int x;
            scanf("%d", &x);
            rowSum[i] += x;
        }
    }
    for (int i = 0; i < r; i++) printf("%d ", rowSum[i]);
    printf("\n");
    return 0;
}
