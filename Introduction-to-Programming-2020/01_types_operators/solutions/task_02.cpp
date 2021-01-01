/**
 * @file   task_02.cpp
 * @author Victor Nolev
 * @date   21.11.2020
 * @brief  Solution for Task 2 from Practice 1
 */

#include <iostream>

int main() {
    int threeDigitsNumber;
    std::cin >> threeDigitsNumber;

    int sumDigits;
    int productDigits;
    double averageDigits;

    // Some magic constants for more "easy-readable" solution
    int firstDigit = threeDigitsNumber % 10;
    threeDigitsNumber /= 10;
    int secondDigit = threeDigitsNumber % 10;
    threeDigitsNumber /= 10;
    int thirdDigit = threeDigitsNumber % 10;

    sumDigits = firstDigit + secondDigit + thirdDigit;
    productDigits = firstDigit * secondDigit * thirdDigit;

    averageDigits = sumDigits / 3.0;

    std::cout << sumDigits << '\n';
    std::cout << productDigits << '\n';
    std::cout << averageDigits << '\n';
    return 0;
}
