/**
 * @file   task_05.cpp
 * @author Victor Nolev
 * @date   21.11.2020
 * @brief  Solution for Task 5 from Practice 1
 */

#include <iostream>

int main() {
    int number;
    std::cin >> number;
    int numberWithoutFirstDigit = number / 10;
    std::cout << numberWithoutFirstDigit << '\n';
    return 0;
}
