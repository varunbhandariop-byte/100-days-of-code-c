/*
Q119: Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.
*/
#include <stdio.h>

#define MAX 100001   // assumes values lie in the range 0..100000

int seen[MAX];

int main() {
    int n;
    scanf("%d", &n);

    // single pass: the first value we see twice is the repeated element
    for (int i = 0; i < n; i++) {
        int x;
        scanf("%d", &x);
        if (seen[x]) {
            printf("%d\n", x);
            return 0;
        }
        seen[x] = 1;
    }
    return 0;
}
