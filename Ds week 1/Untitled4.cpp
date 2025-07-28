#include <stdio.h>  // Include standard input-output header

int main() {
    int n;           // Number of terms
    int first = 0;   // First term of Fibonacci series
    int second = 1;  // Second term
    int next;        // To store next term in the series

    // Ask the user for the number of terms
    printf("Enter the number of terms: ");
    scanf("%d", &n);  // Read user input

    // Check for invalid input
    if (n <= 0) {
        printf("Please enter a positive number.\n");
        return 1; // Exit with error code
    }

    printf("Fibonacci series (%d terms):\n", n);

    // Print the Fibonacci series up to n terms
    for (int i = 1; i <= n; i++) {
        printf("%d ", first);        // Print the current term
        next = first + second;       // Calculate the next term
        first = second;              // Update first and second
        second = next;
    }

    printf("\n"); // Print newline at the end

    return 0; // Successful execution
}

