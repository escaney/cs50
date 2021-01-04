#include <cs50.h>
#include <stdio.h>

int get_user_height(void);
void pyramid(int height);
void create_hashes(int counter);

int main(void) {
  int height = get_user_height();
  pyramid(height);
}

int get_user_height(void) {
  int num;

  do 
  {
    num = get_int("Height: ");
  }
  while (num < 1);

  return num;
}

void create_hashes(int counter) {
  int i = 0;

  while (i <= counter)
  {
    printf("#");
    i += 1;
  }
}

void pyramid(int height) {
  for (int counter = 0; counter < height; counter += 1) {
    int i = height -1;

    // increment and print spaces down from 'height' (i.e 5) to 0
    while (i > counter)
    {
      printf(" ");
      i += -1;
    }

    // increment and print # up to 'height' (i.e 5) from 0
    create_hashes(counter);

    // put a couple spaces in between
    printf(" ");

    // increment and print # up to 'height' (i.e 5) from 0
    create_hashes(counter);

    // new line and begin initial for loop again
    printf("\n");
  }
}