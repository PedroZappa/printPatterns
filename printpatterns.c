#include <stdio.h>

int main() {
  // i = rows, j = spaces, k = stars;
  int i, j, rows, k, pattern;

  // Choose Pattern
  printf("[ Pattern Printer ]\nSelect a Pattern:\nHalf-pyramid: 1\nFull-pyramid: 2\n:");
  scanf("%d", &pattern);

  // Take Rows Input
  printf("\nEnter the number of Rows: ");
  scanf("%d", &rows); 

  if (pattern == 1) {
    // Print Half-Pyramid Pattern
    for (i = 1; i <= rows; i++) { // Number o'Rows
      for (j = 1; j <= i; j++) { // Number o'Stars
        printf("* ");
      }
      printf("\n");
    }
  } else if (pattern == 2) {
    // Print Full-Pyramid Pattern
    for (i = 1; i <= rows; i++, k = 0) { // Number o'Rows
      for (j = 0; j < rows-i; j++) { // Number o'Spaces
        printf(" ");
      }
      for (k = 1; k <= 2*i-1; k++) { // Number o'Stars
        printf("*");
      }
      printf("\n");
    }
  } else {
    printf("Error! Invalid Pattern.\n");
  }

  return 0;
}