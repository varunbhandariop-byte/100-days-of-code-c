/*
Q77: Check if the elements on the diagonal of a matrix are distinct.
*/
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[n][n];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) scanf("%d", &a[i][j]);

    int distinct = 1;
    for (int i = 0; i < n && distinct; i++)
        for (int j = i + 1; j < n; j++)
            if (a[i][i] == a[j][j]) {
                distinct = 0;
                break;
            }

    if (distinct) printf("Yes\n");
    else printf("No\n");
    return 0;
}
