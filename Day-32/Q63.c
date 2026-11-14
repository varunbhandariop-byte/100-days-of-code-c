/*
Q63: Merge two arrays.
*/
#include <stdio.h>

int main() {
    int m, n;
    scanf("%d", &m);
    int a[m];
    for (int i = 0; i < m; i++) scanf("%d", &a[i]);
    scanf("%d", &n);
    int b[n];
    for (int i = 0; i < n; i++) scanf("%d", &b[i]);

    int merged[m + n];
    for (int i = 0; i < m; i++) merged[i] = a[i];
    for (int i = 0; i < n; i++) merged[m + i] = b[i];

    for (int i = 0; i < m + n; i++) printf("%d ", merged[i]);
    printf("\n");
    return 0;
}
