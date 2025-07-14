#include <stdio.h>

// Recursive function to get nth Fibonacci number
int fibonacci(int n) {
    if (n == 0)
        return 0;  // First term
    else if (n == 1)
        return 1;  // Second term
    else
        return fibonacci(n - 1) + fibonacci(n - 2);  // Recursive sum
}

int main() {
    int n;

    printf("Enter position (n): ");
    scanf("%d", &n);

    printf("%dth Fibonacci number = %d\n", n, fibonacci(n));

    return 0;
}

