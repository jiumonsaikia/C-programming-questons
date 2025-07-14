#include <stdio.h>

int main() {
    int num, count = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num == 0)
        count = 1;  // Special case  0 r
    else {
        while (num != 0) {
            num /= 10;  //  last digit tu ootorai 
            count++;    // Increment ( oxomia word tu najanu)
        }
    }

    printf("Number of digits = %d\n", count);

    return 0;
}

