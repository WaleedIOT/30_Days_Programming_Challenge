#include <stdio.h>

// Function to check if a number is even
int is_even(int number) {
  return number % 2 == 0; // Returns 1 (true) if even, 0 (false) otherwise
}

int main() {
  int num;

  printf("Enter a number: ");
  scanf("%d", &num);

  if (is_even(num)) {
    printf("%d is even.\n", num);
  } else {
    printf("%d is odd.\n", num);
  }

  return 0;
}
