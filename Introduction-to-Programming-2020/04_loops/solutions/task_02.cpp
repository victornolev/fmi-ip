/**
 * @file   task_02.cpp
 * @author Victor Nolev
 * @date   24.11.2020
 * @brief  Solution for Task 2 from Practice 4
 */

#include <iostream>

int main() {
    int lastNumber;
    std::cin >> lastNumber;
    int sumNumbers = 0; // Sum of natural numbers from 1 to entered lastNumber

    // First approach - with cycle
    for (int number = 0; number <= lastNumber; ++number) {
        sumNumbers += number;
    }
    // Second approach - without cycles (with maths :D)
    sumNumbers = (lastNumber * (lastNumber + 1)) / 2;

    std::cout << sumNumbers << std::endl;
    return 0;
}
