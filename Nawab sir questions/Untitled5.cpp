#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two numbers: ");//duta nummber dilu
    scanf("%d %d", &a, &b);

    if (a > b)
        printf("%d is larger.\n", a);
    else
        printf("%d is larger.\n", b);//if else use kri kuntu dangor ulalu

    return 0;
}

