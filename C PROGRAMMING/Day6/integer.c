#include <stdio.h>

int main() {
    int size, i;

    // Get the size of the array from the user
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Check for valid size (avoid negative or zero sizes)
    if (size <= 0) {
        printf("Error! Array size must be a positive integer.\n");
        return 1; // Indicate error
    }

    // Declare the integer array
    int numbers[size];

    // Get user input for each element of the array
    printf("Enter %d integers:\n", size);
    for (i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    return 0; // Indicate successful execution
}
