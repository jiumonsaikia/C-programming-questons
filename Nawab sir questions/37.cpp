#include <stdio.h>

// Define structure
struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student s;

    // Input data
    printf("Enter name: ");
    gets(s.name);
    printf("Enter roll number: ");
    scanf("%d", &s.roll);
    printf("Enter marks: ");
    scanf("%f", &s.marks);

    // Display data
    printf("\n--- Student Details ---\n");
    printf("Name: %s\n", s.name);
    printf("Roll: %d\n", s.roll);
    printf("Marks: %.2f\n", s.marks);

    return 0;
}

