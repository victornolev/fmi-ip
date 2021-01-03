/**
 * @file   task_01.cpp
 * @author Victor Nolev
 * @date   21.11.2020
 * @brief  Solution for Task 1 from Practice 3.
 * Requirements: Solve task without using loops and further knowledge.
 */

#include <iostream>

int main() {
    int firstNumber;
    int secondNumber;
    std::cin >> firstNumber >> secondNumber;
    std::cout << "Bigger number is: "
              << ((firstNumber >= secondNumber) ? firstNumber : secondNumber)
              << std::endl;
    return 0;
}
