/*
Q72: Find the sum of all elements in a matrix.
*/
#include <stdio.h>

int main() {
    int r, c, sum = 0;
    scanf("%d %d", &r, &c);
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++) {
            int x;
            scanf("%d", &x);
            sum += x;
        }
    printf("%d\n", sum);
    return 0;
}
