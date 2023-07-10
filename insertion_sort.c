#include <stdio.h>
#define MAX_NUMS 10

void InsertionSort(int list[]);

int main(void) {
  int numbers[MAX_NUMS];

  printf("Enter %d numbers.\n", MAX_NUMS);
  for (int i = 0; i < MAX_NUMS; i++) {
    printf("Input number %d: ", i);
    scanf("%d", &numbers[i]);
  }

  InsertionSort(numbers);

  printf("\n The input set in ascending order:\n");
  for (int i = 0; i < MAX_NUMS; i++) {
    printf("%d\n", numbers[i]);
  }
}

void InsertionSort(int list[]) {
  int unsorted; // index for unsorted list items
  int sorted; // index for sorted items
  int unsortedItem; // current item to be sorted

  for (unsorted = 1; unsorted < MAX_NUMS; unsorted++) {
    unsortedItem = list[unsorted];
    for (sorted = unsorted - 1; (sorted >= 0) && (list[sorted] > unsortedItem); sorted--) {
      list[sorted + 1] = list[sorted];
    }
    list[sorted + 1] = unsortedItem;
  }
}