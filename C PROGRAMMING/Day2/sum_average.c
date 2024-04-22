#include <stdio.h>

int main() {
  int num1, num2, sum;
  float average;

  printf("Enter the first number: ");
  scanf("%d", &num1);

  printf("Enter the second number: ");
  scanf("%d", &num2);

  sum = num1 + num2;
  average = (float)sum / 2; // Casting sum to float for accurate division

  printf("The sum of %d and %d is %d\n", num1, num2, sum);
  printf("The average of %d and %d is %.2f\n", num1, num2, average);

  return 0;
}
