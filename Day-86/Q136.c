/*
Q136: Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.
*/
#include <stdio.h>

enum Menu { ADD = 1, SUBTRACT, MULTIPLY };

int main() {
    int choice;   // 1 = ADD, 2 = SUBTRACT, 3 = MULTIPLY
    int a, b;
    scanf("%d", &choice);
    scanf("%d %d", &a, &b);

    switch ((enum Menu)choice) {
        case ADD:      printf("%d\n", a + b); break;
        case SUBTRACT: printf("%d\n", a - b); break;
        case MULTIPLY: printf("%d\n", a * b); break;
        default:       printf("Invalid choice\n");
    }
    return 0;
}
