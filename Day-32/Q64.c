/*
Q64: Find the digit that occurs the most times in an integer number.
*/
#include <stdio.h>

int main() {
    long long num;
    scanf("%lld", &num);
    if (num < 0) num = -num;

    int count[10] = {0};
    if (num == 0) count[0] = 1;
    while (num > 0) {
        count[num % 10]++;
        num /= 10;
    }

    // digit with the highest count (smallest digit wins a tie)
    int best = 0;
    for (int d = 1; d < 10; d++)
        if (count[d] > count[best]) best = d;

    printf("%d\n", best);
    return 0;
}
