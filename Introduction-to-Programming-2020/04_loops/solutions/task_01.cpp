/**
 * @file   task_01.cpp
 * @author Victor Nolev
 * @date   24.11.2020
 * @brief  Solution for Task 1 from Practice 4.
 */

#include <iostream>

int main() {
    int lastNumber;
    std::cin >> lastNumber;

    for (int number = 1; number <= lastNumber; ++number) {
        std::cout << '[' << number << "] ";
    }
    return 0;
}
