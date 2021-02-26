//
// Created by dmitri on 26.02.2021.
//
#include <iostream>


extern int a1, b1, c1, d1;

int main(){
    //exercise 1

    int a, b, c, d;
    std::cin >> a >> b >> c >> d;
    double result = a * (b + (c / d));
    std::cout << result << std::endl;

    //exercise 2

    int num;
    std::cin >> num;
    std::cout << ((num > 21) ? (num - 21) : ((num - 21)*2)) << std::endl;

    //exercise 3
    double rt = a1 * (b1+ (c1 / d1));
    std::cout << rt << std::endl; // почему-то выводит ошибку
    // "Исключение в операции с плавающей точкой (стек памяти сброшен на диск)"


    //exercise 4
    int cube[3][3][3];
    return 0;
}
