#include <stdio.h>
#include <ctype.h> // For tolower() function

int main() {
  char ch;

  printf("Enter an alphabet: ");
  scanf(" %c", &ch); // Include a space before %c to avoid issues with newline

  // Convert character to lowercase for case-insensitive check
  ch = tolower(ch);

  if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
    printf("%c is a vowel.\n", ch);
  } else if (isalpha(ch)) { // Check if it's an alphabet using isalpha()
    printf("%c is a consonant.\n", ch);
  } else {
    printf("%c is not an alphabet.\n", ch);
  }

  return 0;
}
