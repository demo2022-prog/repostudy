//
// Created by dmitri on 02.03.2021.
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
	if (sum >= 10 && sum <= 20) {
		std::cout << "true" << std::endl;
	} else {
		std::cout << "false" << std::endl;
	}

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
	if (isPrime) {
		std::cout << "This is a prime number" << std::endl;
	} else {
		std::cout << "This is not a prime number" << std::endl;
	}

        
        int x, y;
        std::cout << "Enter the number x: ";
        std::cin >> x;
        std::cout << "Enter the number y: ";
        std::cin >> y;
        if (x == 10 || y == 10 || (x + y) == 10) {
        	std::cout << "true" << std::endl;
        } else {
        	std::cout << "false" << std::endl;
        }
        
        int year;
        std::cout << "Enter the year: ";
        std::cin >> year;
        if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0)) {
        	std::cout << "this year is a leap year" << std::endl;
        } else {
        	std::cout << "this year is not a leap year" << std::endl;
        }

    return 0;
}

