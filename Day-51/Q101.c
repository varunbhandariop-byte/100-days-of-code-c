/*
Q101: Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs. The elements in the sorted array might be repeated. You need to print the first and last occurrence of the target and print the index of first and last occurrence. Print -1, -1 if the target is not present.
Follow-up(optional): Can you do it in O(log n) Time Complexity?
*/
#include <stdio.h>

int main() {
    int n, target;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    scanf("%d", &target);

    int first = -1, last = -1;

    // binary search for first occurrence
    int lo = 0, hi = n - 1;
    while (lo <= hi) {
        int mid = lo + (hi - lo) / 2;
        if (a[mid] == target) { first = mid; hi = mid - 1; }
        else if (a[mid] < target) lo = mid + 1;
        else hi = mid - 1;
    }

    // binary search for last occurrence
    lo = 0; hi = n - 1;
    while (lo <= hi) {
        int mid = lo + (hi - lo) / 2;
        if (a[mid] == target) { last = mid; lo = mid + 1; }
        else if (a[mid] < target) lo = mid + 1;
        else hi = mid - 1;
    }

    printf("%d, %d\n", first, last);
    return 0;
}
