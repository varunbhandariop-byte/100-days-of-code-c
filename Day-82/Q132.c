/*
Q132: Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.
*/
#include <stdio.h>

enum Light { RED, YELLOW, GREEN };

int main() {
    int choice;   // 0 = RED, 1 = YELLOW, 2 = GREEN
    scanf("%d", &choice);
    enum Light light = (enum Light)choice;

    switch (light) {
        case RED:    printf("Stop\n"); break;
        case YELLOW: printf("Wait\n"); break;
        case GREEN:  printf("Go\n");   break;
        default:     printf("Invalid light\n");
    }
    return 0;
}
