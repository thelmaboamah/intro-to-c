#include <stdio.h>
#define MAX_NUMS 10

int main(void) {
  int repIndex;
  int numbers[MAX_NUMS];
  int repeats[MAX_NUMS];

  // Get input
  printf("Enter %d numbers.\n", MAX_NUMS);
  for (int index = 0; index < MAX_NUMS; index++) {
    printf("Input number %d: ", index);
    scanf("%d", &numbers[index]);
  }

  //Scan through entire array, counting number of
  // repeats per element within the original array

  for (int index = 0; index < MAX_NUMS; index++) {
    repeats[index] = 0;
    for (repIndex = 0; repIndex < MAX_NUMS; repIndex++) {
      if (numbers[repIndex] == numbers[index])
        repeats[index]++;
    }
  }

  // Print the results
  for (int index = 0; index < MAX_NUMS; index++) {
    printf("Original number %d. Number of repeats %d\n", numbers[index], repeats[index]);
  }
}