#include <stdio.h>

int main(int argc, char *argv[]) {

  const int MINIMAL_ARGS_INDEX = 2;

  if (argc == 1) {
    printf("You have no args \n ");

  } else if (argc == MINIMAL_ARGS_INDEX) {
    printf("You have only one arg \n ");

  } else if (argc > MINIMAL_ARGS_INDEX && argc < 6) {
    printf("your args are \n");

    for (int i = 1; i < argc; i++) {
      printf("%s \n", argv[i]);
    }

  } else {
    printf("too many args \n");
  }

  return 0;
}
