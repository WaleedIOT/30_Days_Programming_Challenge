#include <stdio.h>

#define DAYS_IN_WEEK 7

int main() {
  char *day_names[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

  for (int i = 0; i < DAYS_IN_WEEK; i++) {
    printf("%s\n", day_names[i]);
  }

  return 0;
}
