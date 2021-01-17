#include <stdio.h>
#include <cs50.h>

void get_change(int cash);

int main(void) {
  float cash = get_float("Change owed: \n");
  int convertedToCents = cash * 100;
  get_change(convertedToCents);
}

void get_change(int total) {
  int quaters = total / 25;
  int remainder = total % 25;
  
  int dimes = remainder / 10;
  remainder = remainder % 10;

  int nickles = remainder / 5;
  remainder = remainder % 5;

  int cents = remainder;

  printf("%i quater/s, %i dime/s, %i nickle/s, %i cent/s\n", quaters, dimes, nickles, cents);
}