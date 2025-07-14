#include <stdio.h>
#include <stdlib.h>  

int main() {
    int *arr, n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    
    arr = (int *)malloc(n * sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Input elements
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // Display elements
    printf("You entered:\n");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    free(arr);  // Free allocated memory

    return 0;
}

