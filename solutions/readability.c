#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int count_letters(string s);
int count_words(string s);
int count_sent(string s);
int grade_sum(int l, int w, int s);
void print_grade(int index);

int main(void) {
  string s = get_string("Enter your text: \n");

  int letters = count_letters(s);
  int words = count_words(s);
  int sentences = count_sent(s);

  int index = grade_sum(letters, words, sentences);

  print_grade(index);
}

// count letters
int count_letters(string s) {
  int count = 0;

  for (int i = 0, l = strlen(s); i < l; i++) 
  {
    if (isalpha(s[i]) > 0) 
    {
      count++;
    }
  }

  printf("lettes: %i\n", count);
  return count;
}

// count words 
int count_words(string s) {
  int count = 1;
  for (int i = 0, l = strlen(s); i < l; i++) 
  {
    if(s[i] == ' ')
    {
      count++;
    }
  }

  printf("words: %i\n", count);
  return count;
}

// count sentences
int count_sent(string s) {
  int count = 0;

  for (int i = 0, l = strlen(s); i < l; i++) 
  {
    if (s[i] == '!' || s[i] == '?' || s[i] == '.') {
      count++;
    }
  }

  printf("sentences: %i\n", count);
  return count;
}

// use the provided formular
int grade_sum(int l, int w, int s) {
  int index;
  return index = round(0.0588*(l / ((float) w / 100)) - 0.296 * (s / ((float) w / 100)) - 15.8);
}

// print grade!
void print_grade(int index) {
  if(index < 1) {
    printf("Before Grade 1\n");
  } else if (index > 16) {
    printf("Grade 16+\n");
  } else {
    printf("Grade %i\n", index);
  }
}