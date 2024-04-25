#include <stdio.h>

// Function to check if a number is prime
int is_prime(int num) {
    // 1 and numbers less than or equal to 1 are not prime
    if (num <= 1) {
        return 0; // Not a prime number
    }

    // Check divisibility from 2 to sqrt(num)
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; // Not a prime number
        }
    }

    return 1; // Prime number
}

int main() {
    int number;

    // Prompt the user to enter a number
    printf("Enter a positive integer: ");
    scanf("%d", &number);

    // Call is_prime function to check if the number is prime
    if (is_prime(number)) {
        printf("%d is a prime number.\n", number);
    } else {
        printf("%d is not a prime number.\n", number);
    }

    return 0;
}
