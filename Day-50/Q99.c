/*
Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.
*/
#include <stdio.h>

int main() {
    int d, m, y;
    scanf("%d/%d/%d", &d, &m, &y);
    char *months[] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun",
                      "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    if (m < 1 || m > 12) {
        printf("Invalid month\n");
        return 0;
    }
    printf("%02d-%s-%d\n", d, months[m - 1], y);
    return 0;
}
