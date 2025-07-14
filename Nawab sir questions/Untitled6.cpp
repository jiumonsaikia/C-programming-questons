#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 2 == 0)
        printf("Even number.\n");
    else
        printf("Odd number.\n");
// logic tu hol  divisivle by 2 hoi ne nhoi
    return 0;
}

