/**
 * @file   task_05.cpp
 * @author Victor Nolev
 * @date   24.11.2020
 * @brief  Solution for Task 5 from Practice 5
 */

#include <iostream>

int power(int base, int exponent);

int main() {
    int number;
    int exponent;
    std::cin >> number >> exponent;
    std::cout << power(number, exponent) << std::endl;
    return 0;
}

int power(int base, int exponent) {
    if (exponent == 0)
        return 1;

    int derivedNumber = base;
    for (int i = 1; i < exponent; ++i)
        derivedNumber *= base;

    return derivedNumber;
}
