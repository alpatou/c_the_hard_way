#include <stdio.h>

// main function
int main(int argc, char *argv[]) {

  int ages[] = {23, 43, 12, 89, 2};

  char *names[] = {"Alan", "Frank", "Mary", "John", "Lisa"};

  int count = sizeof(ages) / sizeof(int);
  int i = 0;

  // first way using indexing
  for (i = 0; i < count; i++) {
    printf("%s has %d years alive", names[i], ages[i]);
  }

  printf("-----\n");

  // set up the pointers to the start of the array
  int *cur_age = ages;
  char **cur_name = names;

  // second way using pointers
  for (i = 0; i < count; i++) {
    printf("%s is %d years old.\n", *(cur_name + i), *(cur_age + i));
  }

  printf("----/n");

  // third way using pointers

  for (i = 0; i < count; i++) {
    printf("%s is %d years old . \n", cur_name[i], cur_age[i]);
  }

  printf("----/n");

  // fourth way to use pointers (stupid complex way)
  for (cur_name = names, cur_age = ages; (cur_name - ages), count;
       cur_name++, cur_age++) {

    printf("%s lived for %d years. \n", *cur_name, *cur_age);
  }

  return 0;
}
