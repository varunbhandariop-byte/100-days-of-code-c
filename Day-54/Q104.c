/*
Q104: Write a Program to take a positive integer n as input, and find the pivot integer x such that the sum of all elements between 1 and x inclusively equals the sum of all elements between x and n inclusively. Print the pivot integer x. If no such integer exists, print -1. Assume that it is guaranteed that there will be at most one pivot integer for the given input.
Follow-up 1 (optional): Can you do it in O(log n) Time Complexity? Follow-up 2 (optional): Can you do it in O(1) Time Complexity?
*/
#include <stdio.h>

int main() {
    long long n;
    scanf("%lld", &n);

    // sum(1..x) = sum(x..n)  =>  x*x = n*(n+1)/2
    long long total = n * (n + 1) / 2;

    // binary search for x such that x*x == total  (O(log n))
    long long lo = 1, hi = n;
    while (lo <= hi) {
        long long mid = lo + (hi - lo) / 2;
        long long sq = mid * mid;
        if (sq == total) {
            printf("%lld\n", mid);
            return 0;
        } else if (sq < total) lo = mid + 1;
        else hi = mid - 1;
    }
    printf("-1\n");
    return 0;
}
