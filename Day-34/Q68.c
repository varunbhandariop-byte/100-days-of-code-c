/*
Q68: Delete an element from an array.
*/
#include <stdio.h>

int main() {
    int n, pos;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    scanf("%d", &pos);   // pos is 1-based

    if (pos < 1 || pos > n) {
        printf("Invalid position\n");
        return 0;
    }

    for (int i = pos - 1; i < n - 1; i++) a[i] = a[i + 1];
    n--;

    for (int i = 0; i < n; i++) printf("%d ", a[i]);
    printf("\n");
    return 0;
}
