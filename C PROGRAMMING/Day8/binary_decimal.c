#include <stdio.h>

int main() {
    long long int binary_num, decimal_num = 0, remainder, base = 1;

    printf("Enter the binary number: ");
    scanf("%lld", &binary_num);

    while (binary_num != 0) {
        remainder = binary_num % 10;
        if (remainder != 0 && remainder != 1) {
            printf("Invalid binary number (only 0s and 1s allowed)\n");
            return 1; // Indicate error
        }
        decimal_num += remainder * base;
        base *= 2;
        binary_num /= 10;
    }

    printf("Decimal equivalent: %lld\n", decimal_num);

    return 0;
}
