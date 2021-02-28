/**
 * @file   task_03.cpp
 * @author Victor Nolev
 * @date   04.01.2021
 * @brief  Solution for Task 3 from Practice 11
 */

#include <iostream>

void printBitsRec(unsigned int integer, unsigned int position);

void printBits(unsigned int integer);

int main() {
    unsigned integer;
    std::cin >> integer;
    printBits(integer);

    return 0;
}

void printBitsRec(unsigned int integer, unsigned int position) {
    unsigned mask = 1 << (position - 1);
    std::cout << ((integer & mask) ? '1' : '0');

    if (position == 1) {
        return;
    } else {
        return printBitsRec(integer, position - 1);
    }
}

void printBits(unsigned int integer) {
    unsigned position = sizeof(unsigned) * 8;
    return printBitsRec(integer, position);
}
