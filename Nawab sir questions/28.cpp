#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    printf("Enter a string: ");
    gets(str);

    while (str[i] != '\0')  //  null character leke count
        i++;

    printf("Length = %d\n", i);

    return 0;
}

