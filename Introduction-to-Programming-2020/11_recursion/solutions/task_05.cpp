/**
 * @file   task_05.cpp
 * @author Victor Nolev
 * @date   04.01.2021
 * @brief  Solution for Task 5 from Practice 11
 */

#include <iostream>

void printDigits(unsigned int integer);

int main() {
    unsigned n;
    std::cin >> n;
    std::cout << "Forward: ";
    printDigits(n);

    return 0;
}

void printDigits(unsigned int integer) {
    if (integer == 0) {
        return;
    }

    printDigits(integer / 10);
    std::cout << integer % 10 << ' ';
}
