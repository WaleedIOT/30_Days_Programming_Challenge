#include <stdio.h>

int main() {
    int age;

    // Prompt the user to enter their age
    printf("Please enter your age: ");
    scanf("%d", &age);

    // Use if-else statements to guide the user based on their age
    if (age < 0) {
        printf("Invalid age entered. Age cannot be negative.\n");
    } else if (age < 18) {
        printf("You are a minor. You must be accompanied by an adult.\n");
    } else if (age >= 18 && age < 65) {
        printf("You are an adult. Enjoy your independence!\n");
    } else {
        printf("You are a senior citizen. Take care of yourself!\n");
    }

    return 0;
}
