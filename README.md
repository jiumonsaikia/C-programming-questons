# C-programming-questions 
#Nawab sir's first assignment
1.	Write a C program to print “Hello, World!”.
#include <stdio.h>
int main() {
    printf("Hello, World!\n");
    return 0;
}
// header file dia pasot main functionn define kri print function di likhi dilung aru

#include <stdio.h>
int main() {
    int a, b, sum;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    sum = a + b;
    printf("Sum = %d\n", sum);
    return 0;
}

#include <stdio.h>
#define PI 3.1416
int main() {
    float radius, area;
    printf("Enter radius: ");
    scanf("%f", &radius);
    area = PI * radius * radius;
    printf("Area = %.2f\n", area);
    return 0;
}

#include <stdio.h>
int main() {
    int a, b, temp;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    temp = a;
    a = b;
    b = temp;
    printf("After swapping: a = %d, b = %d\n", a, b);
    return 0;
}

#include <stdio.h>
int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    if (a > b)
        printf("%d is larger\n", a);
    else if (b > a)
        printf("%d is larger\n", b);
    else
        printf("Both numbers are equal\n");
    return 0;
}

#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num % 2 == 0)
        printf("%d is even\n", num);
    else
        printf("%d is odd\n", num);
    return 0;
}

#include <stdio.h>
int main() {
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        printf("%d is a leap year\n", year);
    else
        printf("%d is not a leap year\n", year);
    return 0;
}

#include <stdio.h>
int main() {
    int n, i;
    unsigned long long factorial = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (i = 1; i <= n; ++i)
        factorial *= i;
    printf("Factorial of %d = %llu\n", n, factorial);
    return 0;
}

#include <stdio.h>
int main() {
    int n, i;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (i = 1; i <= 10; ++i)
        printf("%d x %d = %d\n", n, i, n * i);
    return 0;
}

#include <stdio.h>
int main() {
    int n, i;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (i = 1; i <= 10; ++i)
        printf("%d x %d = %d\n", n, i, n * i);
    return 0;
}

#include <stdio.h>
int main() {
    int num, reversed = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    while (num != 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    printf("Reversed number = %d\n", reversed);
    return 0;
}

#include <stdio.h>
int main() {
    int num, i, isPrime = 1;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num <= 1) isPrime = 0;
    for (i = 2; i <= num / 2; ++i) {
        if (num % i == 0) {
            isPrime = 0;
            break;
        }
    }
    if (isPrime)
        printf("%d is a prime number\n", num);
    else
        printf("%d is not a prime number\n", num);
    return 0;
}


#include <stdio.h>
int main() {
    int num, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    while (num != 0) {
        sum += num % 10;
        num /= 10;
    }
    printf("Sum of digits = %d\n", sum);
    return 0;
}

#include <stdio.h>
int main() {
    int n, t1 = 0, t2 = 1, nextTerm, i;
    printf("Enter number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series: ");
    for (i = 1; i <= n; ++i) {
        printf("%d ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    printf("\n");
    return 0;
}

#include <stdio.h>
int main() {
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
            printf("%c is a vowel\n", ch);
        else
            printf("%c is a consonant\n", ch);
    } else {
        printf("Not an alphabet character\n");
    }
    return 0;
}

#include <stdio.h>
int main() {
    float celsius, fahrenheit;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);
    fahrenheit = (celsius * 9 / 5) + 32;
    printf("Temperature in Fahrenheit = %.2f\n", fahrenheit);
    return 0;
}

#include <stdio.h>
int main() {
    int a, b, gcd, lcm, temp_a, temp_b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    temp_a = a;
    temp_b = b;
    while (temp_b != 0) {
        int temp = temp_b;
        temp_b = temp_a % temp_b;
        temp


#include <stdio.h>
int main() {
    int num, count = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num == 0) count = 1;
    while (num != 0) {
        num /= 10;
        count++;
    }
    printf("Number of digits = %d\n", count);
    return 0;
}

#include <stdio.h>
int main() {
    int i, j, isPrime;
    printf("Prime numbers between 1 and 100 are:\n");
    for (i = 2; i <= 100; i++) {
        isPrime = 1;
        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime)
            printf("%d ", i);
    }
    return 0;
}

#include <stdio.h>
int main() {
    int n, i, max;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    max = a[0];
    for (i = 1; i < n; i++)
        if (a[i] > max)
            max = a[i];
    printf("Largest element = %d\n", max);
    return 0;
}

#include <stdio.h>
int main() {
    int n, i, j, temp;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (i = 0; i < n - 1; i++)
        for (j = i + 1; j < n; j++)
            if (a[i] > a[j]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
    printf("Sorted array: ");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    return 0;
}

#include <stdio.h>
int main() {
    int a[10][10], b[10][10], sum[10][10], r, c, i, j;
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);
    printf("Enter first matrix:\n");
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &a[i][j]);
    printf("Enter second matrix:\n");
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &b[i][j]);
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            sum[i][j] = a[i][j] + b[i][j];
    printf("Sum:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++)
            printf("%d ", sum[i][j]);
        printf("\n");
    }
    return 0;
}

#include <stdio.h>
int main() {
    int a[10][10], b[10][10], res[10][10], r1, c1, r2, c2, i, j, k;
    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &r2, &c2);
    if (c1 != r2) {
        printf("Multiplication not possible.\n");
        return 0;
    }
    printf("Enter first matrix:\n");
    for (i = 0; i < r1; i++)
        for (j = 0; j < c1; j++)
            scanf("%d", &a[i][j]);
    printf("Enter second matrix:\n");
    for (i = 0; i < r2; i++)
        for (j = 0; j < c2; j++)
            scanf("%d", &b[i][j]);
    for (i = 0; i < r1; i++)
        for (j = 0; j < c2; j++) {
            res[i][j] = 0;
            for (k = 0; k < c1; k++)
                res[i][j] += a[i][k] * b[k][j];
        }
    printf("Result:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++)
            printf("%d ", res[i][j]);
        printf("\n");
    }
    return 0;
}

#include <stdio.h>
int main() {
    int a[10][10], trans[10][10], r, c, i, j;
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);
    printf("Enter matrix:\n");
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &a[i][j]);
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            trans[j][i] = a[i][j];
    printf("Transpose:\n");
    for (i = 0; i < c; i++) {
        for (j = 0; j < r; j++)
            printf("%d ", trans[i][j]);
        printf("\n");
    }
    return 0;
}

#include <stdio.h>
int main() {
    int a[100], n, i, pos, val;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Enter position and value to insert: ");
    scanf("%d %d", &pos, &val);
    for (i = n; i >= pos; i--)
        a[i] = a[i - 1];
    a[pos - 1] = val;
    n++;
    printf("Array after insertion:\n");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    return 0;
}

#include <stdio.h>
int main() {
    int a[100], n, i, pos;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Enter position to delete: ");
    scanf("%d", &pos);
    for (i = pos - 1; i < n - 1; i++)
        a[i] = a[i + 1];
    n--;
    printf("Array after deletion:\n");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    return 0;
}

#include <stdio.h>
int main() {
    int a[100], n, i, key, found = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Enter value to search: ");
    scanf("%d", &key);
    for (i = 0; i < n; i++) {
        if (a[i] == key) {
            found = 1;
            break;
        }
    }
    if (found)
        printf("Element found at position %d\n", i + 1);
    else
        printf("Element not found\n");
    return 0;
}

#include <stdio.h>
int main() {
    char str1[100], str2[100];
    int i;
    printf("Enter a string: ");
    gets(str1);
    for (i = 0; str1[i] != '\0'; i++)
        str2[i] = str1[i];
    str2[i] = '\0';
    printf("Copied string: %s\n", str2);
    return 0;
}

#include <stdio.h>
int main() {
    char str[100];
    int i = 0;
    printf("Enter a string: ");
    gets(str);
    while (str[i] != '\0')
        i++;
    printf("Length = %d\n", i);
    return 0;
}

#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int i, len, isPalindrome = 1;
    printf("Enter a string: ");
    gets(str);
    len = strlen(str);
    for (i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            isPalindrome = 0;
            break;
        }
    }
    if (isPalindrome)
        printf("Palindrome\n");
    else
        printf("Not a palindrome\n");
    return 0;
}

#include <stdio.h>
int main() {
    char str[200];
    int vowels = 0, consonants = 0, digits = 0, spaces = 0, i;
    printf("Enter a string: ");
    gets(str);
    for (i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            if (ch == 'a'|| ch == 'e'|| ch == 'i'|| ch == 'o'|| ch == 'u' ||
                ch == 'A'|| ch == 'E'|| ch == 'I'|| ch == 'O'|| ch == 'U')
                vowels++;
            else
                consonants++;
        } else if (ch >= '0' && ch <= '9') {
            digits++;
        } else if (ch == ' ') {
            spaces++;
        }
    }
    printf("Vowels: %d\nConsonants: %d\nDigits: %d\nSpaces: %d\n", vowels, consonants, digits, spaces);
    return 0;
}

#include <stdio.h>
int main() {
    char op;
    float a, b;
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);
    printf("Enter two operands: ");
    scanf("%f %f", &a, &b);

    switch (op) {
        case '+': printf("Result = %.2f\n", a + b); break;
        case '-': printf("Result = %.2f\n", a - b); break;
        case '*': printf("Result = %.2f\n", a *

#include <stdio.h>
int factorial(int n) {
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Factorial = %d\n", factorial(n));
    return 0;
}

#include <stdio.h>
int fibonacci(int n) {
    if (n == 0) return 0;
    else if (n == 1) return 1;
    else return fibonacci(n - 1) + fibonacci(n - 2);
}
int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Fibonacci(%d) = %d\n", n, fibonacci(n));
    return 0;
}

#include <stdio.h>
int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int *p = arr;
    printf("Pointer arithmetic:\n");
    for (int i = 0; i < 5; i++) {
        printf("*(p + %d) = %d\n", i, *(p + i));
    }
    return 0;
}

#include <stdio.h>
void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}
int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    swap(&a, &b);
    printf("After swapping: a = %d, b = %d\n", a, b);
    return 0;
}

#include <stdio.h>
void bubbleSort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
}
int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    bubbleSort(arr, n);
    printf("Sorted array:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}

#include <stdio.h>
struct Student {
    int roll;
    char name[50];
    float marks;
};
int main() {
    struct Student s;
    printf("Enter roll, name, and marks: ");
    scanf("%d %s %f", &s.roll, s.name, &s.marks);
    printf("Student Info:\nRoll: %d\nName: %s\nMarks: %.2f\n", s.roll, s.name, s.marks);
    return 0;
}

#include <stdio.h>
int main() {
    FILE *fptr;
    char data[100];
    fptr = fopen("file.txt", "w");
    if (fptr == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    printf("Enter text to write: ");
    gets(data);
    fputs(data, fptr);
    fclose(fptr);

    fptr = fopen("file.txt", "r");
    printf("\nData from file:\n");
    while (fgets(data, sizeof(data), fptr) != NULL)
        puts(data);
    fclose(fptr);
    return 0;
}

#include <stdio.h>
int main() {
    FILE *f1, *f2, *f3;
    char ch;

    f1 = fopen("file1.txt", "r");
    f2 = fopen("file2.txt", "r");
    f3 = fopen("merged.txt", "w");

    if (f1 == NULL || f2 == NULL || f3 == NULL) {
        printf("Error opening files!\n");
        return 1;
    }

    while ((ch = fgetc(f1)) != EOF)
        fputc(ch, f3);
    while ((ch = fgetc(f2)) != EOF)
        fputc(ch, f3);

    printf("Files merged into 'merged.txt'\n");

    fclose(f1);
    fclose(f2);
    fclose(f3);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
int main() {
    int *arr, n, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    arr = (int*) malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory not allocated!\n");
        return 1;
    }

    printf("Enter elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Entered elements are:\n");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    free(arr);
    return 0;
}













