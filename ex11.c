#include <stdio.h>

int main(int argc, char *argv[]) {

  int numbers[4] = {0};
  char name[4] = {'a'};

  // raw printing
  printf("numbers: %d %d %d %d \n", numbers[0], numbers[1], numbers[2],
         numbers[3]);

  printf("name : %c %c %c %c \n", name[0], name[1], name[2], name[3]);

  return 0;
}
