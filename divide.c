#include <stdio.h>

int IntDivide(int x, int y, int *quoPtr, int *remPtr);

int main(void)
{
  int dividend;   // Number to be divided
  int divisor;    // Number to divide by
  int quotient;   // Integer result of division
  int remainder;  // Integer remainder of division
  int error;      // Did something go wrong?

  printf("input dividend: ");
  scanf("%d", &dividend);
  printf("input divisor: ");
  scanf("%d", &divisor);

  error = IntDivide(dividend, divisor, &quotient, &remainder);

  if (!error)
    printf("Answer: %d remainder %d\n", quotient, remainder);
  else
    printf("IntDivide failed. \n");
}

int IntDivide(int x, int y, int *quoPtr, int *remPtr) {
  if (y != 0) {
    *quoPtr = x / y;
    *remPtr = x % y;
    return 0;
  }
  else
    return -1;
}