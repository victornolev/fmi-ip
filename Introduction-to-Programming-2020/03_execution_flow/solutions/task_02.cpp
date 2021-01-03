/**
 * @file   task_02.cpp
 * @author Victor Nolev
 * @date   21.11.2020
 * @brief  Solution for Task 2 from Practice 3.
 * Requirements: Solve task without using loops and further knowledge.
 */

#include <iostream>

int main() {
    int firstNumber;
    int secondNumber;
    int thirdNumber;
    std::cin >> firstNumber >> secondNumber >> thirdNumber;
    int biggerNumber = (firstNumber >= secondNumber) ? firstNumber : secondNumber;
    std::cout << "The biggest number is: "
              << ((biggerNumber >= thirdNumber) ? biggerNumber : thirdNumber)
              << std::endl;
    return 0;
}
