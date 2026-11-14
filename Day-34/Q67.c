/*
Q67: Insert an element in an array at a given position.
*/
#include <stdio.h>

int main() {
    int n, pos, x;
    scanf("%d", &n);
    int a[n + 1];
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    scanf("%d %d", &pos, &x);   // pos is 1-based

    if (pos < 1 || pos > n + 1) {
        printf("Invalid position\n");
        return 0;
    }

    for (int i = n; i >= pos; i--) a[i] = a[i - 1];
    a[pos - 1] = x;
    n++;

    for (int i = 0; i < n; i++) printf("%d ", a[i]);
    printf("\n");
    return 0;
}
