#include <stdio.h>

int main() {
  // i = rows, j = spaces, k = stars;
  int i, j, rows, k;

  // Take Rows Input
  printf("Enter the number of Rows: ");
  scanf("%d", &rows); 

  // Print Half-Pyramid Pattern
  // for (i = 1; i <= rows; i++) { // Number o'Rows
  //   for (j = 1; j <= i; j++) { // Number o'Stars
  //     printf("* ");
  //   }
  //   printf("\n");
  // }

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

  return 0;
}