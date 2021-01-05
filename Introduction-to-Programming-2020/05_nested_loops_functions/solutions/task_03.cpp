/**
 * @file   task_03.cpp
 * @author Victor Nolev
 * @date   24.11.2020
 * @brief  Solution for Task 3 from Practice 5
 */

#include <iostream>

int biggerNumber(int firstNumber, int secondNumber);

int main() {
    int firstNumber, secondNumber;
    std::cin >> firstNumber >> secondNumber;
    std::cout << biggerNumber(firstNumber, secondNumber) << std::endl;
    return 0;
}

int biggerNumber(int firstNumber, int secondNumber) {
    return firstNumber > secondNumber ? firstNumber : secondNumber;
}
