#include <stdio.h>

int main(int argc, char *argv[]) {

  int distance = 100;
  float power = 2.345f;
  double super_power = 56789.4532;
  char initial = 'A';
  char first_name[] = "Zed";
  char last_name[] = "Shaw";

  printf("You are %d miles away\n", distance);
  printf("You are %f levels of power\n", power);
  printf("You have %f super powers\n", super_power);
  printf("you start with %c\n", initial);
  printf("your first is %s\n", first_name);
  printf("your last is %s\n", last_name);
  printf("My whole name is %s %c %s \n", first_name, initial, last_name);

  int bugs = 100;
  double bug_rate = 1.2;

  printf("You have %d bugs and rate %f\n", bugs, bug_rate);

  long universe_of_deflects = 1L * 1024L * 1024L * 1024L;

  printf("The Universe has %ld bugs", universe_of_deflects);

  double expected_bugs = bugs * bug_rate;

  printf("You expected to have %f bugs \n", expected_bugs);

  double part_of_universe = expected_bugs / universe_of_deflects;
  printf("this is only a %e portion of universe \n ", part_of_universe);

  char nul_byte = '\0';

  printf("nul byte is %d \n", nul_byte);

  int care_precentage = bugs * nul_byte;

  printf("Which means you should care %d%%. \n", care_precentage);

  return 0;
}
