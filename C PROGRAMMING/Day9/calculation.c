#include <stdio.h>

// Function to calculate the sum
int sum(int a, int b) {
  return a + b;
}

int main() {
  int num1, num2, result;

  printf("Enter two numbers: ");
  scanf("%d %d", &num1, &num2);

  // Call the sum function and store the result
  result = sum(num1, num2);

  printf("Sum of %d and %d is: %d\n", num1, num2, result);

  return 0;
}
