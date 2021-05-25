#include <iostream>

typedef struct playing_field { // Наше поле
  char field[3][3] = { 0, 0, 0,
                       0, 0, 0,
                       0, 0, 0};

} field;

int main(int argc, char const *argv[]) {
  enum badges {a = 79, b = 88};

  char arr[2] = {0, 0}; // Массив
    arr[0] = a;
    arr[1] = b;
  std::cout << arr[0] << " " << arr[1] << " " << '\n';
  return 0;
}
