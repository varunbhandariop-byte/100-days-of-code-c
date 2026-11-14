/*
Q105: Write a program to take an integer array nums of size n, and print the majority element. The majority element is the element that appears strictly more than floor(n / 2) times. Print -1 if no such element exists. Note: Majority Element is not necessarily the element that is present most number of times.
Follow-up (optional): Can you do it in O(n) Time Complexity?
*/
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);

    // Boyer-Moore voting algorithm to find a candidate
    int candidate = 0, count = 0;
    for (int i = 0; i < n; i++) {
        if (count == 0) candidate = a[i];
        count += (a[i] == candidate) ? 1 : -1;
    }

    // verify the candidate
    count = 0;
    for (int i = 0; i < n; i++)
        if (a[i] == candidate) count++;

    if (count > n / 2) printf("%d\n", candidate);
    else printf("-1\n");
    return 0;
}
