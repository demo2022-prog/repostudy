#include <iostream>
#include <fstream>
#include <string>
#include <cstdio>
#define BUFSIZE (100)
#define ARRSIZE (4)

void print(char[]);

int main(int argc, char const *argv[]) {
  char *buf1;
  buf1 = new char[BUFSIZE];// если я правильно понял то это и будет буфером
  char *buf2;
  buf2 = new char[BUFSIZE];// если я правильно понял то это и будет буфером
  int size = 2 * BUFSIZE;
  char text3[size];
  if (!buf1 || !buf2) {
    std::cout << "Ошибка выделения памяти.\n";
    return 1;
  }
// task 1
  std::string s1 = "basic_ofstream - implements high-level file stream output operations.";
  std::string s2 = "basic_ifstream - implements high-level file stream input operations.";
  std::ofstream file;
  std::ifstream read;
    file.open("text_1.txt"); // записываем 1 файл
    file << s1;
//    file << "basic_ofstream - implements high-level file stream output operations.";
    file.close();
    file.open("text_2.txt"); // записываем 2 файл
    file << s2;
//    file << "basic_ifstream - implements high-level file stream input operations.";
    file.close();
//task 2
  read.open("text_1.txt"); // если я правильно понял то это и будет буфером
    read.getline(buf1, 100);
    read.close();

  read.open("text_2.txt"); // если я правильно понял то это и будет буфером
    read.getline(buf2, 100);
    read.close();

  file.open("text_3.txt"); // записываем text_1 и text_2 в text_3
    file << buf1 << " " << buf2;
    file.close();

  read.open("text_3.txt"); // выводим text_3
    read.getline(text3, 200);
    std::cout << text3 << "\n";
    read.close();
    delete [] buf1;
    delete [] buf2;

//task3  так и не осилил
  return 0;
}
