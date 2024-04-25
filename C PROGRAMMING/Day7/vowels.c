#include <stdio.h>
#include <ctype.h> // For tolower() function

int main() {
    char str[100];
    int i, count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove trailing newline (if present)
    int length = strlen(str);
    if (str[length - 1] == '\n') {
        str[length - 1] = '\0';
    }

    // Convert all characters to lowercase for case-insensitive counting
    for (i = 0; str[i] != '\0'; i++) {
        str[i] = tolower(str[i]);
    }

    // Count vowels
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
            count++;
        }
    }

    printf("The number of vowels in the string is: %d\n", count);

    return 0;
}
