#include "tolowercase.h"
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
  if (argc == 1) {
    printf("Please enter an input file and an output file\n\n");
    puts("tolowercase -h from help");
    return 1;
  } else if (argc == 2) {
    if (strcmp(argv[1], "-h") == 0) {
      printf("USAGE: tolowercase input.txt output.txt\n\n");
      puts("OPTIONS");
      puts("-h: Print this screen");
      return 0;
    }
    printf("Please enter an output file\n\n");
    puts("tolowercase -h from help");
    return 1;
  } else if (argc > 3) {
    printf("Too many arguments\n\n");
    puts("tolowercase -h from help");
  }

  toLowerCase(argv[1], argv[2]);
  puts("Done\n");

  return 0;
}
