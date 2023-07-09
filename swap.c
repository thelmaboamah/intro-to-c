#include <stdio.h>

void Swap(int *firstVal, int *secondVal);

int main(void)
{
  int valueA = 3;
  int valueB = 5;
  printf("Before swap\n");
  printf("valueA = %d, valueB = %d\n", valueA, valueB);

  Swap(&valueA, &valueB);
  printf("After swap\n");
  printf("valueA = %d, valueB = %d\n", valueA, valueB);
}

void Swap(int *firstVal, int *secondVal)
{
  int temp;
  temp = *firstVal;
  *firstVal = *secondVal;
  *secondVal = temp;
}