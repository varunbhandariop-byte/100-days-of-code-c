/*
Q109: Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.
*/
#include <stdio.h>

int main() {
    int n, k;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    scanf("%d", &k);

    long long window = 0;
    for (int i = 0; i < k; i++) window += a[i];
    long long best = window;

    // slide the window one step at a time
    for (int i = k; i < n; i++) {
        window += a[i] - a[i - k];
        if (window > best) best = window;
    }
    printf("%lld\n", best);
    return 0;
}
