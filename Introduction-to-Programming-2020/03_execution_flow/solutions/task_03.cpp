/**
 * @file   task_03.cpp
 * @author Victor Nolev
 * @date   21.11.2020
 * @brief  Solution for Task 3 from Practice 3.
 * Requirements: Solve task without using loops and further knowledge.
 */

#include <iostream>

int main() {
    int firstNumber;
    int secondNumber;
    int thirdNumber;
    std::cin >> firstNumber >> secondNumber >> thirdNumber;
    // Print numbers ascending
    if (firstNumber < secondNumber) {
        if (firstNumber < thirdNumber) { 
            if (secondNumber < thirdNumber) {
                std::cout << firstNumber << " < " << secondNumber << " < " << thirdNumber << std::endl;
            } else {
                std::cout << firstNumber << " < " << thirdNumber << " <= " << secondNumber << std::endl;
            }
        } else {
            std::cout << thirdNumber << " <= " << firstNumber << " < " << secondNumber << std::endl;
        }
    } else {
        if (secondNumber < thirdNumber) {
            if (firstNumber < thirdNumber) {
                std::cout << secondNumber << " <= " << firstNumber << " < " << thirdNumber << std::endl;
            } else {
                std::cout << secondNumber << " < " << thirdNumber << " <= " << firstNumber << std::endl;
            }
        } else {
            std::cout << thirdNumber << " <= " << secondNumber << " <= " << firstNumber << std::endl;
        }
    }
    return 0;
}
