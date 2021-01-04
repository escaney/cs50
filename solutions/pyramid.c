#include <cs50.h>
#include <stdio.h>

int get_user_height(void);
void pyramid(int height);
void create_hashes(int counter);

int main(void) {
  // here we receive back a value from get_user_height()
  // And store it in the height variable
  int height = get_user_height();

  // then we pass that value to our pyramid function
  pyramid(height);
}

int get_user_height(void) {
  // setting num outside the do / while loop for scope reasons
  int height;

  // do keep asking for a valid height (a height that passes the condition)
  do 
  {
    height = get_int("Height: ");
  }
  while (height < 1);

  // store that height inside this get_user_function
  return height;
}

void create_hashes(int counter) {
  // initiating i as 0, in order to iterate up to counter
  int i = 0;

  // remember create_hashes() has been called INSIDE pyramid
  // so while i is less than counter, keep printing # on one line
  while (i <= counter)
  {
    printf("#");
    i += 1;
  }
}

void pyramid(int height) {
  for (int counter = 0; counter < height; counter += 1) {
    // this i is set so we can iterate down
    int i = height;

    // increment and print spaces down from 'height' (i.e 5) to 0
    // we need to +1 to counter -- It's a workaround to make
    // the while loop run the appropriate amount of times
    // ! It's weird, I know, don't worry bout it for now!
    while (i > counter + 1)
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