/*
Q78: Find the sum of main diagonal elements for a square matrix.
*/
#include <stdio.h>

int main() {
    int n, sum = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) {
            int x;
            scanf("%d", &x);
            if (i == j) sum += x;
        }
    printf("%d\n", sum);
    return 0;
}
