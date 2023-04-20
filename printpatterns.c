#include <stdio.h>
#include <stdbool.h>

bool valid_pattern(int pattern) {
  return pattern >= 1 && pattern <= 4;
}

int main() {
  // i = rows, j = spaces, k = stars;
  int i, j, rows, k, pattern, space;

  // Choose Pattern
  printf("[ Pattern Printer ]\nSelect a Pattern:\n1: Half-Pyramid\n2: Full-Pyramid\n3: Inverted Half-Pyramid:\n4: Inverted Full-Pyramid:\n");
  scanf("%d", &pattern);
  // Validate Input
  if (!valid_pattern(pattern)) {
    printf("Error! Invalid Pattern Code.\n");
    return 0;
  }
  // Take Rows Input
  printf("\nEnter the number of Rows: ");
  scanf("%d", &rows); 

  if (pattern == 1) {
    // Print Half-Pyramid Pattern
    for (i = 1; i <= rows; ++i) { // Number o'Rows
      for (j = 1; j <= i; ++j) { // Number o'Stars
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
  } else if (pattern == 3) {
    // Print Inverted Half-Pyramid Pattern
    for (i = rows; i >= 1; --i) {
      for (j = 1; j <= i; ++j) {
         printf("* ");
      }
      printf("\n");
   }
  } else if (pattern == 4) {
    // Print Inverted Full-Pyramid Pattern
    for (i = rows; i >= 1; --i) {
      for (space = 0; space < rows - i; ++space)
         printf("  ");
      for (j = i; j <= 2 * i - 1; ++j)
         printf("* ");
      for (j = 0; j < i - 1; ++j)
         printf("* ");
      printf("\n");
    } 
  } else {
    printf("Error! Invalid Pattern Code.\n");
  }

  return 0;
}