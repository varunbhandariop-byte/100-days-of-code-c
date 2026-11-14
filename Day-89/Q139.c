/*
Q139: Show that enums store integers by printing assigned values.
*/
#include <stdio.h>

enum Fruit { APPLE, BANANA = 5, CHERRY, DATE = 20 };

int main() {
    enum Fruit f = CHERRY;
    int x = BANANA;          // an enum constant can be stored in an int
    enum Fruit g = 20;       // an integer can be stored in an enum variable

    printf("APPLE = %d\n", APPLE);
    printf("BANANA = %d\n", BANANA);
    printf("CHERRY = %d\n", CHERRY);
    printf("DATE = %d\n", DATE);
    printf("f (CHERRY) as int: %d\n", f);
    printf("x = %d\n", x);
    printf("g = %d (same as DATE)\n", g);
    printf("CHERRY + 1 = %d\n", CHERRY + 1);
    printf("Size of enum Fruit: %zu bytes\n", sizeof(enum Fruit));
    return 0;
}
