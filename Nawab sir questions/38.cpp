#include <stdio.h>

int main() {
    FILE *fptr;
    char name[50];
    int age;

    // Write to file
    fptr = fopen("data.txt", "w");
    if (fptr == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    printf("Enter name: ");
    scanf("%s", name);
    printf("Enter age: ");
    scanf("%d", &age);

    fprintf(fptr, "Name: %s\nAge: %d\n", name, age);  // Write data
    fclose(fptr);

    // Read from file
    fptr = fopen("data.txt", "r");
    if (fptr == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    char ch;
    printf("\n--- File Content ---\n");
    while ((ch = fgetc(fptr)) != EOF)
        putchar(ch);

    fclose(fptr);

    return 0;
}

