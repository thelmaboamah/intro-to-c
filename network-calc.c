#include <stdio.h>

int main(void) {
  int amount;
  int rate;
  int time;
  int hours;
  int minutes;
  int seconds;

  printf("How many bytes of data are to be transferred? ");
  scanf("%d", &amount);
  printf("What is the transfer rate in bytes/second? ");
  scanf("%d", &rate);

  // calculates time in seconds
  time = amount/ rate;

  hours = time / 3600;
  minutes = (time % 3600) / 60;
  seconds = ((time % 3600) % 60);

  printf("Time: %dh, %dm, %ds", hours, minutes, seconds);

}