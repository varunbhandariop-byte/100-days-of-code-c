/*
Q65: Search in a sorted array using binary search.
*/
#include <stdio.h>

int main() {
    int n, key;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    scanf("%d", &key);

    int lo = 0, hi = n - 1;
    while (lo <= hi) {
        int mid = lo + (hi - lo) / 2;
        if (a[mid] == key) {
            printf("Element found at index %d\n", mid);
            return 0;
        } else if (a[mid] < key) lo = mid + 1;
        else hi = mid - 1;
    }
    printf("Element not found\n");
    return 0;
}
