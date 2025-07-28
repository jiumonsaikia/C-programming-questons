#include <stdio.h>  // Include standard input-output header

int main() {
    int decimal, binary[32]; // Array to store binary digits (max 32 bits for int)
    int i = 0;               // Counter for binary array

    // Ask the user to enter a decimal number
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);   // Read decimal input

    int original = decimal; // Store original number for printing

    // Handle case when input is 0
    if (decimal == 0) {
        printf("Binary of 0 is: 0\n");
        return 0;
    }

    // Convert decimal to binary
    while (decimal > 0) {
        binary[i] = decimal % 2;  // Store remainder (0 or 1)
        decimal = decimal / 2;    // Update the decimal number
        i++;                      // Move to next index
    }

    // Print the binary number in reverse order
    printf("Binary of %d is: ", original);
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]); // Print binary digits
    }
    printf("\n");

    return 0; // Return 0 to indicate successful execution
}

