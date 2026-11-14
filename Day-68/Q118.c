/*
Q118: Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number
*/
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    long long expected = (long long)n * (n + 1) / 2;   // sum of 0..n
    long long actual = 0;
    for (int i = 0; i < n; i++) {
        int x;
        scanf("%d", &x);
        actual += x;
    }
    printf("%lld\n", expected - actual);
    return 0;
}
