#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int length;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // Use fgets for safer input

    // Remove the newline character (if present)
    length = strlen(str);
    if (str[length - 1] == '\n') {
        str[length - 1] = '\0'; // Replace newline with null terminator
    }

    printf("The reversed string is: ");
    for (int i = strlen(str) - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");

    return 0;
}
