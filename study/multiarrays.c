#include "stdio.h"

int main(int argc, char const *argv[]) {
  const int ROWS = 10; //столбцы
  const int COLS = 10; //строки
  int table[ROWS][COLS];

  int r;
  int c;
  for (r = 0; r < ROWS; r++) {
    for (c = 0; c < COLS; c++) {
     table[r][c] = (r + 1) * (c + 1);
    }
    printf("\n");
  }
  for (r = 0; r < ROWS; r++) {
    for (c = 0; c < COLS; c++) {
      printf("%3d", table[r][c]);
    }
    printf("\n");
  }

  char* stringArray[3] = {"Hello", "C-language", "World"};

  return 0;
}
