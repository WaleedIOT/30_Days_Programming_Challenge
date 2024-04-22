#include <stdio.h>

int main() {
  char name[50]; // Array to store user's name (adjust size if needed)

  printf("What is your name? ");
  scanf("%s", name); // Read the name entered by the user

  printf("Hello, %s! Welcome to C programming.\n", name);

  return 0;
}
