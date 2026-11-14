/*
Q69: Find the second largest element in an array.
*/
#include <stdio.h>
#include <limits.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);

    int largest = INT_MIN, second = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (a[i] > largest) {
            second = largest;
            largest = a[i];
        } else if (a[i] < largest && a[i] > second) {
            second = a[i];
        }
    }
    if (second == INT_MIN) printf("No second largest element\n");
    else printf("%d\n", second);
    return 0;
}
