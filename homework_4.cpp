//
// Created by dmitri on 25.02.2021.
//
#include <iostream>
#include<cmath>
int main () {
	//
	int a, b, sum;
	std::cout << "Enter the number a: ";
	std::cin  >> a;
	std::cout << "Enter the number b: ";
	std::cin  >> b;
	sum = a + b;
	std::cout << ((sum >= 10 && sum <= 20) ? "true" : "false") << std::endl;

    int num, i;
    bool isPrime = 1;
    std::cout<<"Enter a number: ";
    std::cin>>num;
    for (i=2; i<=(sqrt(abs(num))); i++){
        if (num%i==0){
        isPrime = 0;
        break;
        }
    }
        std::cout << ((isPrime) ? "This is a prime number" : "This is not a prime number") << std::endl;
        
        int x, y;
        std::cout << "Enter the number x: ";
        std::cin >> x;
        std::cout << "Enter the number y: ";
        std::cin >> y;
        std::cout << ((x == 10 || y == 10 || (x + y) == 10) ? "true" : "false") << std::endl;
        
        int year;
        std::cout << "Enter the year: ";
        std::cin >> year;
        std::cout << ((year % 4 == 0) ? "this year is a leap year according to the old calendar" : "this year is not a leap year according to the old calendar") << std::endl;
        std::cout << ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0) ? "this year is a leap year according to the new calendar" : "this year is not a leap year according to the new calendar") << std::endl;
    return 0;
}

