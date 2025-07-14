#include <stdio.h>

int main() {
    int arr[100], n, pos, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter position to delete (0-based): ");
    scanf("%d", &pos);

    // Shift elements to left
    for (i = pos; i < n - 1; i++)
        arr[i] = arr[i + 1];

    n--;  // Decrease size

    printf("Array after deletion:\n");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}

