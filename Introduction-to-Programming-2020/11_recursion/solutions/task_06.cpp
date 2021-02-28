/**
 * @file   task_06.cpp
 * @author Victor Nolev
 * @date   04.01.2021
 * @brief  Solution for Task 6 from Practice 11
 */

#include <iostream>

void printDigitsBackward(unsigned int integer);

int main() {
    unsigned n;
    std::cin >> n;
    std::cout << "Backward: ";
    printDigitsBackward(n);

    return 0;
}

void printDigitsBackward(unsigned int integer) {
    if (integer <= 0) {
        return;
    }

    std::cout << (integer % 10) << ' ';
    printDigitsBackward(integer / 10);
}
