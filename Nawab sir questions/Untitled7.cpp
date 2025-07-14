#include <stdio.h>

int main() {
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        printf("Leap year.\n");
    else
        printf("Not a leap year.\n");
        // logic tu hol jodi 4 di divide jai tene leap year

    return 0;
}

