#include <stdio.h>
#define MAX_STRING 20

int StringLength(char string[]);

int main(void) {
  char input[MAX_STRING];
  int length = 0;

  printf("Input a word (less that %d characters)\n", MAX_STRING);
  scanf("%s", input);

  length = StringLength(input);
  printf("The word contains %d characters", length);
}

int StringLength(char string[]) {
  int index = 0;

  while (string[index] != '\0') {
    index++;
  }
  return index;
}