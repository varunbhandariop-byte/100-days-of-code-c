/*
Q143: Find and print the student with the highest marks.
*/
#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    int n;
    scanf("%d", &n);
    struct Student s[n];
    for (int i = 0; i < n; i++) {
        scanf(" %49[^\n]", s[i].name);
        scanf("%d", &s[i].roll_no);
        scanf("%f", &s[i].marks);
    }

    // track the index of the student with the highest marks
    int top = 0;
    for (int i = 1; i < n; i++)
        if (s[i].marks > s[top].marks) top = i;

    printf("Student with the highest marks:\n");
    printf("Name: %s\n", s[top].name);
    printf("Roll No: %d\n", s[top].roll_no);
    printf("Marks: %.2f\n", s[top].marks);
    return 0;
}
