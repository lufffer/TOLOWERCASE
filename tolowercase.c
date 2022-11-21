#include "tolowercase.h"
#include <locale.h>
#include <wchar.h>
#include <wctype.h>

void toLowerCase(const char *infilename, const char *outfilename) {
  setlocale(LC_CTYPE, "");
  // Opening files
  FILE *input = fopen(infilename, "r");
  if (input == NULL) {
    printf("Error opening %s for reading", infilename);
    return;
  }
  FILE *output = fopen(outfilename, "a");
  if (output == NULL) {
    printf("Error opening %s from writting", outfilename);
    return;
  }

  // Copy data
  wchar_t word[LENGTH];
  while (fgetws(word, LENGTH, input)) {
    word[0] = towlower(word[0]);
    fprintf(output, "%ls", word);
  }

  // Clean up
  fclose(input);
  fclose(output);
}
