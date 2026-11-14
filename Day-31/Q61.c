/*
Q61: Search for an element in an array using linear search.
*/
#include <stdio.h>

int main() {
    int n, key;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    scanf("%d", &key);

    for (int i = 0; i < n; i++) {
        if (a[i] == key) {
            printf("Element found at index %d\n", i);
            return 0;
        }
    }
    printf("Element not found\n");
    return 0;
}
