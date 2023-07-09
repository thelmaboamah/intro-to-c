#include <stdio.h>

int main(void)
{
  int num;

  printf("Enter a number: ");
  scanf("%d", &num);
  printf("%d as a hexidecimal is %x", num, num);
}