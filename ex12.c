#include <stdio.h> // Includes the standard input/output library for printf

int main(int argc, char *argv[]) { // Main function, entry point of the program

  int areas[] = {10, 12, 13, 14, 20}; // Declares an array of integers named areas

  char name[] = "Zed"; // Declares a character array (string) named name

  char full_name[] = {'Z', 'e', 'd', ' ', 'A', '.', ' ', 'S', 'h', 'a', 'w', '\0'}; // Declares a character array (string) named full_name

  printf("The size of an int %ld\n", sizeof(int)); // Prints the size of an integer in bytes

  printf("The size of areas (int[]): %ld\n", sizeof(areas)); // Prints the size of the areas array in bytes

  printf("The number of ints in areas: %ld\n", sizeof(areas) / sizeof(int)); // Prints the number of integers in the areas array

  printf("The first area is %d, the 2nd %d.\n", areas[0], areas[1]); // Prints the first and second elements of the areas array

  printf("The size of a char: %ld\n", sizeof(char)); // Prints the size of a character in bytes

  printf("The size of name (char[]): %ld\n", sizeof(name)); // Prints the size of the name array in bytes

  printf("The number of chars: %ld\n", sizeof(name) / sizeof(char)); // Prints the number of characters in the name array

  printf("The size of full_name (char[]): %ld\n", sizeof(full_name)); // Prints the size of the full_name array in bytes

  printf("The number of chars: %ld\n", sizeof(full_name) / sizeof(char)); // Prints the number of characters in the full_name array

  printf("name=\"%s\" and full_name=\"%s\"\n", name, full_name); // Prints the contents of the name and full_name arrays

  return 0; // Returns 0 to indicate successful execution
}
