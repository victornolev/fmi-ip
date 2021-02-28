/**
 * @file   task_02.cpp
 * @author Victor Nolev
 * @date   04.01.2021
 * @brief  Solution for Task 2 from Practice 11
 */

#include <iostream>
#include <cmath>

bool isPrimeRec(unsigned int integer, unsigned int stop, unsigned int divider);

bool isPrime(unsigned int integer);

int main() {
    unsigned number;
    std::cin >> number;
    if (isPrime(number)) {
        std::cout << "Entered number is prime!\n";
    } else {
        std::cout << "Entered number is NOT prime!\n";
    }

    return 0;
}

bool isPrimeRec(unsigned int integer, unsigned int stop, unsigned int divider) {
    if (integer == 1 || integer == 2) {
        return true;
    }

    if (integer % divider == 0) {
        return false;
    }

    if (divider == stop) {
        return true;
    }
    return isPrimeRec(integer, stop, divider + 1);
}

bool isPrime(unsigned int integer) {
    return isPrimeRec(integer, std::sqrt(integer), 2);
}
