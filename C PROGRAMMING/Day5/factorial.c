#include <stdio.h>

int main() {
    int num, i;
    long long factorial = 1; // Use long long to handle larger factorials

    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    // Check for negative input
    if (num < 0) {
        printf("Error! Factorial is not defined for negative numbers.\n");
        return 1; // Indicate error
    }

    // Calculate factorial (using long long to avoid overflow for larger numbers)
    for (i = 1; i <= num; i++) {
        factorial *= i;
    }

    printf("The factorial of %d is: %lld\n", num, factorial);

    return 0; // Indicate successful execution
}