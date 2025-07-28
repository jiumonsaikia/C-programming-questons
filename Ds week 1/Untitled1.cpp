#include <stdio.h>  // Include standard input-output header file

int main() {
    int arr[100];       // Declare an array of size 100
    int n, i;           // Variables for number of elements and loop counter

    // Ask the user for the number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);    // Read the number of elements

    // Input elements into the array
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);  // Read each element into the array
    }

    // Print all elements of the array
    printf("The elements in the array are:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);  // Print each element with a space
    }

    printf("\n"); // Print a newline at the end

    return 0;  // Return 0 to indicate successful execution
}

