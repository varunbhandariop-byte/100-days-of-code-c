/*
Q137: Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.
*/
#include <stdio.h>

enum Role { ADMIN, USER, GUEST };

int main() {
    int choice;   // 0 = ADMIN, 1 = USER, 2 = GUEST
    scanf("%d", &choice);

    switch ((enum Role)choice) {
        case ADMIN: printf("Welcome, Admin! You have full access.\n"); break;
        case USER:  printf("Welcome, User! You have limited access.\n"); break;
        case GUEST: printf("Welcome, Guest! You have read-only access.\n"); break;
        default:    printf("Unknown role\n");
    }
    return 0;
}
