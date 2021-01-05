/**
 * @file   task_10.cpp
 * @author Victor Nolev
 * @date   24.11.2020
 * @brief  Solution for Task 10 from Practice 5
 */

#include <iostream>

void printPrimeDivisors(int integer);

bool isPrime(int integer);

int main() {
    /* По въведено цяло положително число n
    * програмата да отпечатва всичките му прости делители разделени с интервали.*/
    unsigned n;
    std::cin >> n;
    printPrimeDivisors(n);
    return 0;
}

void printPrimeDivisors(int integer) {
    for (int currentNumber = 2; currentNumber <= integer; ++currentNumber) {
        if (integer % currentNumber == 0) {
            if (isPrime(currentNumber)) {
                std::cout << currentNumber << ' ';
            }
        }
    }
}

bool isPrime(int integer) {
    // Smallest prime number is 2
    if (integer < 2) {
        return false;
    }
    // All even numbers are not prime except 2
    if (integer % 2 == 0) {
        return integer == 2;
    }
    for (size_t i = 3; i * i <= integer; ++i) {
        if (integer % i == 0) {
            return false;
        }
    }
    return true;
}
