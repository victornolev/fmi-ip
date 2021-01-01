/**
 * @file   task_03.cpp
 * @author Victor Nolev
 * @date   21.11.2020
 * @brief  Solution for Task 3 from Practice 1
 */

#include <iostream>

int main() {
    int threeDigitsNumber;
    std::cin >> threeDigitsNumber;
    
    // Some magic constants for more "easy-readable" solution
    int firstDigit = threeDigitsNumber % 10;
    int secondDigit = (threeDigitsNumber / 10) % 10;
    int thirdDigit = threeDigitsNumber / 100;

    std::cout << firstDigit << secondDigit << thirdDigit;
    return 0;
}
