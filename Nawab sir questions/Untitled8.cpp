#include <stdio.h>

int main() {
    int i, num;
    unsigned long long factorial = 1;

    printf("Enter a positive number: ");
    scanf("%d", &num);

    for (i = 1; i <= num; ++i)n
        factorial *= i;

    printf("Factorial = %llu\n", factorial);

    return 0;
}

