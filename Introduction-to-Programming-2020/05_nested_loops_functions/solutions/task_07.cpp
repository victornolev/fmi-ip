/**
 * @file   task_07.cpp
 * @author Victor Nolev
 * @date   24.11.2020
 * @brief  Solution for Task 7 from Practice 5
 */

#include <iostream>

int nthFibonacciNumber(int position);

int main() {
    /* Напишете функция, която връща n-тото число на Фибоначи. */
    int n;
    std::cin >> n;
    std::cout << nthFibonacciNumber(n) << std::endl;
    return 0;
}

int nthFibonacciNumber(int position) {
    int beforeLastNumber = 1; // First number in Fibonacci sequence
    int lastNumber = beforeLastNumber; // Second number in Fibonacci sequence

    if (position < 1) {
        std::cerr << "Invalid position!" << std::endl;
        return -1;
    }

    if (position == 1 || position == 2) {
        return lastNumber;
    }

    int currentNumber = 0;
    for (int currentPosition = 3; currentPosition <= position; ++currentPosition) {
        currentNumber = beforeLastNumber + lastNumber;
        beforeLastNumber = lastNumber;
        lastNumber = currentNumber;
    }
    int nthNumber = currentNumber;
    return nthNumber;
}
