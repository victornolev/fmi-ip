/**
 * @file   task_04.cpp
 * @author Victor Nolev
 * @date   21.11.2020
 * @brief  Solution for Task 4 from Practice 3.
 * Requirements: Solve task without using loops and further knowledge.
 */

#include <iostream>

int main() {
    int number;
    std::cin >> number;
    if (number % 2 == 0) {
        std::cout << "Entered number is even!" << std::endl;
    } else {
        std::cout << "Entered number is odd!" << std::endl;
    }
    return 0;
}
