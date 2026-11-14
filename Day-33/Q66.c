/*
Q66: Insert an element in a sorted array at the appropriate position.
*/
#include <stdio.h>

int main() {
    int n, x;
    scanf("%d", &n);
    int a[n + 1];
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    scanf("%d", &x);

    // shift larger elements one step right, then drop x into the gap
    int i = n - 1;
    while (i >= 0 && a[i] > x) {
        a[i + 1] = a[i];
        i--;
    }
    a[i + 1] = x;
    n++;

    for (int j = 0; j < n; j++) printf("%d ", a[j]);
    printf("\n");
    return 0;
}
