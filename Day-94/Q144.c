/*
Q144: Write a function that accepts a structure as parameter and prints its members.
*/
#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

// the structure is passed by value, so the function gets its own copy
void printStudent(struct Student s) {
    printf("Name: %s\n", s.name);
    printf("Roll No: %d\n", s.roll_no);
    printf("Marks: %.2f\n", s.marks);
}

int main() {
    struct Student s;
    scanf(" %49[^\n]", s.name);
    scanf("%d", &s.roll_no);
    scanf("%f", &s.marks);

    printStudent(s);
    return 0;
}
