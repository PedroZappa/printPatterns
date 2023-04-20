#include <stdio.h>
#include <stdbool.h>

bool valid_pattern(int pattern) {
  return pattern >= 1 && pattern <= 4;
}

int main() {
  int row, space, star, pattern, rows;

  // Choose Pattern
  puts("[ Pattern Printer ]");
  puts("Select a Pattern:");
  puts("1: Half-Pyramid");
  puts("2: Full-Pyramid");
  puts("3: Inverted Half-Pyramid:");
  puts("4: Inverted Full-Pyramid:");
  scanf("%d", &pattern);

  // Validate Input
  if (!valid_pattern(pattern)) {
    printf("Error! Invalid Pattern Code.\n");
    return 0;
  }

  // Take Rows Input
  printf("\nEnter the number of Rows: ");
  scanf("%d", &rows); 

  switch (pattern) {
    case 1:
      // Print Half-Pyramid Pattern
      for (row = 1; row <= rows; ++row) { // Number o'Rows
        for (star = 1; star <= row; ++star) { // Number o'Stars
          printf("* ");
        }
        printf("\n");
      }
      break;

    case 2:
      // Print Full-Pyramid Pattern
      for (row = 1; row <= rows; row++) { // Number o'Rows
        for (space = 1; space <= rows - row; space++) { // Number o'Spaces
          printf("  ");
        }
        for (star = 1; star <= 2 * row - 1; star++) { // Number o'Stars
          printf("* ");
        }
        printf("\n");
      }
      break;

    case 3:
      // Print Inverted Half-Pyramid Pattern
      for (row = rows; row >= 1; --row) {
        for (star = 1; star <= row; ++star) {
           printf("* ");
        }
        printf("\n");
      }
      break;

    case 4:
      // Print Inverted Full-Pyramid Pattern
      for (row = rows; row >= 1; --row) {
        for (space = 0; space < rows - row; ++space)
           printf("  ");
        for (star = row; star <= 2 * row - 1; ++star)
           printf("* ");
        for (star = 0; star < row - 1; ++star)
           printf("* ");
        printf("\n");
      }
      break;

    default:
      puts("Error! Invalid Pattern Code.");
      break;
  }

  return 0;
}