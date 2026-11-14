/*
Q138: Print all enum names and integer values using a loop.
*/
#include <stdio.h>

enum Color { RED, GREEN, BLUE, YELLOW, BLACK, COLOR_COUNT };

int main() {
    const char *names[] = {"RED", "GREEN", "BLUE", "YELLOW", "BLACK"};
    for (int i = 0; i < COLOR_COUNT; i++)
        printf("%s = %d\n", names[i], i);
    return 0;
}
