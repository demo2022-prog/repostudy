#include <stdio.h>
#include <stdlib.h>

  // Exercise 1
int main(int argc, const char** argv) {
  int number;
  printf("enter the number ");
  scanf("%d", &number);
  if (number <= 100 &&  number >= 0)
  {
      printf("Your number is in the specified range\n");
  }
  else
  {
    printf("Your number is not in the specified range\n");
  }

  //Exercise 2

  printf("enter the 1 number: ");
    int a1;
      scanf("%d", &a1);
  printf("enter the 2 number: ");
    int a2;
      scanf("%d", &a2);
  printf("enter the 3 number: ");
    int a3;
      scanf("%d", &a3);
    printf("enter the 4 number: ");
    int a4;
      scanf("%d", &a4);
    printf("enter the 5 number: ");
    int a5;
      scanf("%d", &a5);
    printf("enter the 6 number: ");
    int a6;
      scanf("%d", &a6);
    printf("enter the 7 number: ");
    int a7;
      scanf("%d", &a7);
    printf("enter the 8 number: ");
    int a8;
      scanf("%d", &a8);
    printf("enter the 9 number: ");
    int a9;
      scanf("%d", &a9);
    printf("enter the 10 number: ");
    int a10;
      scanf("%d", &a10);
    int result;
    result = (a1 + a2 + a3 + a4 + a5 + a6 + a7 + a8 + a9 + a10);
    printf("Average = %d\n", result/10);

    //Exercise 3
    int start = 1;
    int num1;
    do {
      printf("%s\n", "Enter a number for 1000");
      scanf("%d", &num1);
    } while (num1 < 0 || num1 > 1000);
    while (start <= num1) {
      if (start % 2 == 0) {
    printf("%d, ", start);
    start++;
  }
  else
  {
    start++;
  }
}
  printf("Next\n");

    //Exercise 4

    int h = 0, i = 0, j = 0;
    printf("Enter the height of the triangle: "); scanf("%d", &h);
    for (i = 0; i < h; ++i, printf("\n")) {
        for (j = (h - i) - 1; j > 0 ; --j, printf(" "));
        for (j = (i * 2) + 1; j > 0 ; --j, printf("^"));
    }
  return 0;
}
