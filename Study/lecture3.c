#include <stdio.h>

void printArray(int *arr, int len) {
  int i = 0;
  while (i < len) {
    printf("%03d, ", arr[i++]);
  }
  printf("\n");
}

float average(int *arr, int len) {
  float result = 0;
  int j;
  for (j = 0; j < len; j++) {
    result += *(arr + j);
  }
  return result / len;
}

int main(int argc, char const *argv[]) {
  const int ARRAY_LENGTH = 10;
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  printArray(arr, ARRAY_LENGTH);
  printf("Среднее арифметическое: %f\n", average(arr, ARRAY_LENGTH));
  return 0;
}
