#include <stdio.h>

int main(int argc, const char** argv) {
  float first;
  float second;
  float result;
  unsigned char operator;
  printf("Please enter the first operand: " );
  scanf("%f", &first);
  fseek(stdin, 0, SEEK_END);
  printf("Please enter an action: " );
  scanf("%c", &operator);
    if (operator == '/')
     {
      do {
        printf("Please enter the second operand: " );
        scanf("%f", &second);
      } while(second == 0);
    }
    else
    {
      printf("Please enter the second operand: " );
      scanf("%f", &second);
    }

    switch (operator)
    {
      case '*':
      result = first * second;
      printf("%f %c %f = %f\n", first, operator, second, result);
        break;
      case '/':
      result = first / second;
      printf("%f %c %f = %f\n", first, operator, second, result);
        break;
      case '-':
      result = first - second;
      printf("%f %c %f = %f\n", first, operator, second, result);
        break;
      case '+':
      result = first + second;
      printf("%f %c %f = %f\n", first, operator, second, result);
        break;
      default:
      printf("Unknown operator: %c", operator);
    }
}
