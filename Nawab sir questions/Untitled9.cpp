#include <stdio.h>

int main() {
    int num, i;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (i = 1; i <= 10; ++i)
        printf("%d x %d = %d\n", num, i, num * i);
//for loop use kri jikunu no r 10 leke * table bonai dibo parisu
    return 0;
}

