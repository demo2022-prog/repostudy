// Кода много, читаемость скорее всего ужасная
// было бы неплохо провести небольшое занятие по
// правильному оформлению и улучшению читаемости

#include<iostream>
#include<cmath>
#include <cstdarg>
//task 1
void changeFunction (int i);
void changeFunction (...) { //выделить массив в отдельную функцию у меня не получилось
  int n = 10;
  int i = 0;
  int arr[n] {1, 1, 0, 0, 1, 0, 1, 1, 0, 0};
  for (i = 0; i < n; i++) {//выводим массив для визуализации
    std::cout << arr[i] << " ";
  }
    std::cout << std::endl;
	for (i = 0; i < n; i++) { //меняем значения
		if (arr[i] == 0) {
			arr[i] = 1;
		} else if (arr[i] == 1) {
					arr[i] = 0;
			}
    std::cout << arr[i] << " ";
  }
    std::cout << std::endl;
}
//task 1**
void changeBitFunction () {
  int n = 10;
  int arr[n] {1, 1, 0, 0, 1, 0, 1, 1, 0, 0};
  for (int i = 0; i < n; i++) {//выводим массив для визуализации
    std::cout << arr[i] << " ";
  }
    std::cout << std::endl;
  for (int i = 0; i < n; i++) {//делаем битовый сдвиг, думаю правильно оформил
    arr[i] = arr[i] ^ 1;
    std::cout << arr[i] << " ";
  }
    std::cout << std::endl;
}

//task 2
void aggregateFunction () {
  int n = 8;
  int arr[n];
  for (int i = 0; i < n; i++) {//заполняем массив
    arr[i] = (i * 3) + 1;
  }
  for (int i = 0; i < n; i++) {//выводим массив для визуализации
    std::cout << arr[i] << " ";
  }
  std::cout << std::endl;
}
//task 3
bool arrComparison () {
  int n;
  int sum;
  int testSum;
  bool result;
  std::cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++) {//заполнялка
    std::cin >> arr[i];
    sum += arr[i];
}
  for (int i = 0; i < n; i++) {
    if (testSum == sum - testSum) {
      result = 1; // если ОК пиши 1
    } else {
    	testSum += arr[i]; //если фигня делай так
      result = 0;				 // и пиши 0
    }
  }
  for (int i = 0; i < n; i++) { //выводим массив для визуализации
    std::cout << arr[i] << " ";
}
std::cout << std::endl;
std::cout << result << std::endl;
  return 0;
}
//task 4
void arrShift () {
  int size = 5;
  int n = -2;
  n = abs(n); //В смещение влево я не смог, потому взял по модулю
  int arr[size] {1, 2, 3, 4, 5};
  for (int i = 0; i < n; i++) {
    int temp = arr[0];
    for (int i = 1; i < size; i++) { // смещение вправо
      arr[i - 1] = arr[i];
      }
      arr[size - 1] = temp;
  }
for (int i = 0; i < size; i++) {//выводим массив для визуализации
    std::cout << arr [i] << " ";
  }
  std::cout << std::endl;
}
//task 5
float changeVarFunction (int size, ...) {
  int arr[size];
  va_list lst;
  va_start(lst, size);
  for (int i = 0; i < size; i++) { //заполняем массив элементами
    arr[i] = va_arg (lst, int);
    std::cout << arr[i] << " ";
  }
  std::cout << std::endl;
for (int i = 0; i < size; i++) {//через биты получилось короче
  arr[i] = arr[i] ^ 1; // 0000 <-> 0001;
  std::cout << arr[i] << " ";
}
  std::cout << std::endl;
  va_end (lst);
return 0;
}

int main(int argc, char const *argv[]) {
  changeFunction();
  changeBitFunction ();
  aggregateFunction();
  arrComparison();
  arrShift();
  changeVarFunction(10, 1, 1, 0, 0, 1, 0, 1, 1, 0, 0);
  return 0;
}
