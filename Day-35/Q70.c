/*
Q70: Rotate an array to the right by k positions.
*/
#include <stdio.h>

int main() {
    int n, k;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    scanf("%d", &k);
    k %= n;

    // last k elements come first, followed by the remaining elements
    for (int i = n - k; i < n; i++) printf("%d ", a[i]);
    for (int i = 0; i < n - k; i++) printf("%d ", a[i]);
    printf("\n");
    return 0;
}
