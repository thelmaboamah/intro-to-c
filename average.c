#include <stdio.h>
#define MAX_NUMS 10

int Average(int input_values[]);

int main(void)
{
  int mean;
  int numbers[MAX_NUMS];

  // Get input
  printf("Enter %d numbers.\n", MAX_NUMS);
  for (int i = 0; i < MAX_NUMS; i++) {
    printf("Input numbers %d: ", i);
    scanf("%d", &numbers[i]);
  }

  mean = Average(numbers);
  
  printf("The average of these numbers is %d\n", mean);
}

int Average(int inputValues[]) {
  int sum = 0;
  for (int i = 0; i < MAX_NUMS; i++) {
    sum = sum + inputValues[i];
  }

  return (sum / MAX_NUMS);
}