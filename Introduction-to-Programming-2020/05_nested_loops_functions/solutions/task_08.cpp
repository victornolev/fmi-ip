/**
 * @file   task_08.cpp
 * @author Victor Nolev
 * @date   24.11.2020
 * @brief  Solution for Task 8 from Practice 5
 */

#include <iostream>

bool isPrime(int integer);

int main() {
    unsigned integer;
    std::cin >> integer;

    if (isPrime(integer)) {
        std::cout << "Entered integer is prime number!\n";
    } else {
        std::cout << "Entered integer is not prime number!\n";
    }
    return 0;
}

bool isPrime(int integer) {
    const int MIN_PRIME_NUMBER = 2;
    // Smallest prime number is 2
    if (integer < MIN_PRIME_NUMBER) {
        return false;
    }
    // All even numbers are not prime except 2
    if (integer % MIN_PRIME_NUMBER == 0) {
        return integer == MIN_PRIME_NUMBER;
    }
    for (size_t i = MIN_PRIME_NUMBER + 1; i * i <= integer; ++i) {
        if (integer % i == 0) {
            return false;
        }
    }
    return true;
}
