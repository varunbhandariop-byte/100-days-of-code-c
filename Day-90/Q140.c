/*
Q140: Define a struct with enum Gender and print person's gender.
*/
#include <stdio.h>

enum Gender { MALE, FEMALE, OTHER };

struct Person {
    char name[50];
    enum Gender gender;
};

int main() {
    struct Person p;
    int g;   // 0 = MALE, 1 = FEMALE, 2 = OTHER
    scanf(" %49[^\n]", p.name);
    scanf("%d", &g);
    p.gender = (enum Gender)g;

    printf("Name: %s\n", p.name);
    switch (p.gender) {
        case MALE:   printf("Gender: Male\n");   break;
        case FEMALE: printf("Gender: Female\n"); break;
        case OTHER:  printf("Gender: Other\n");  break;
        default:     printf("Gender: Unknown\n");
    }
    return 0;
}
