#include <stdio.h>

int main() {
    int arr[100];  // Maximum size
    int n, i, newElement, position;

    // Input current size
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // New element and position
    printf("Enter the new element: ");
    scanf("%d", &newElement);
    printf("Enter the position (1 to %d): ", n + 1);
    scanf("%d", &position);

    // Shift elements to make space
    for (i = n; i >= position; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert new element
    arr[position - 1] = newElement;
    n++;

    // Display updated array
    printf("Array after insertion: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
