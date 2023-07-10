#include <stdio.h>
#define MAX_STRING 20

int StringLength(char string[]);
void CharSwap(char *firstVal, char *secondVal);
void Reverse(char string[]);


int main(void) {
  char input[MAX_STRING];

  printf("Input a word (less that %d characters)\n", MAX_STRING);
  scanf("%s", input);

  Reverse(input);
  printf("The word reverse is %s\n", input);
}

int StringLength(char string[]) {
  int index = 0;

  while (string[index] != '\0') {
    index++;
  }
  return index;
}

void CharSwap(char *firstVal, char *secondVal) {
  char temp;

  temp = *firstVal;
  *firstVal = *secondVal;
  *secondVal = temp;
}

void Reverse(char string[]) {
  int length;

  length = StringLength(string);

  for (int i = 0; i < (length / 2); i++) {
    CharSwap(&string[i], &string[length - (i + 1)]);
  }
}