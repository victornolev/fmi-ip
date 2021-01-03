/**
 * @file   task_07.cpp
 * @author Victor Nolev
 * @date   21.11.2020
 * @brief  Solution for Task 7 from Practice 3.
 * Requirements: Solve task without using loops and further knowledge.
 */

#include <iostream>

int main() {
    int number;
    std::cin >> number;

    std::cout << "Absolute value of the number is: "
              << ((number < 0) ? -number : number)
              << std::endl;
    return 0;
}
