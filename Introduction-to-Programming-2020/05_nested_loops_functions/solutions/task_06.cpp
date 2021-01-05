/**
 * @file   task_06.cpp
 * @author Victor Nolev
 * @date   24.11.2020
 * @brief  Solution for Task 6 from Practice 5
 */

#include <iostream>

int greatestCommonDivisor(int firstNumber, int secondNumber);

int main() {
    /* Да се напише функция, която връща НОД на две цели числа. */
    int firstNumber, secondNumber;
    std::cin >> firstNumber >> secondNumber;
    std::cout << greatestCommonDivisor(firstNumber, secondNumber) << std::endl;
    return 0;
}

int greatestCommonDivisor(int firstNumber, int secondNumber) {
    // The Euclidean Algorithm

    // Example: 12 / 2 = 6 where 12 is dividend, 2 is divisor
    // Dividend is the bigger number and divisor is the smaller number
    int dividend = firstNumber > secondNumber ? firstNumber : secondNumber;
    int divisor = firstNumber < secondNumber ? firstNumber : secondNumber;

    int remainder = dividend % divisor;
    while (remainder > 0) {
        dividend = divisor;
        divisor = remainder;
        remainder = dividend % divisor;
    }
    int greatestCommonDivisor = divisor;
    return greatestCommonDivisor;
}
