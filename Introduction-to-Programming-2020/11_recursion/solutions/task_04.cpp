/**
 * @file   task_04.cpp
 * @author Victor Nolev
 * @date   04.01.2021
 * @brief  Solution for Task 4 from Practice 11
 */

#include <iostream>

void countBitsRec(unsigned int integer, unsigned int position, int &zeroes, int &ones);

void countBits(unsigned int integer);

int main() {
    unsigned n;
    std::cin >> n;
    countBits(n);

    return 0;
}

void countBitsRec(unsigned int integer, unsigned int position, int &zeroes, int &ones) {
    unsigned mask = 1 << (position - 1);

    ((integer & mask) ? ++ones : ++zeroes);
    if (position == 1) {
        return;
    } else {
        return countBitsRec(integer, position - 1, zeroes, ones);
    }
}

void countBits(unsigned int integer) {
    int zeroes = 0;
    int ones = 0;
    unsigned position = sizeof(unsigned) * 8;
    countBitsRec(integer, position, zeroes, ones);
    std::cout << "In number: " << integer << " we have " << zeroes << " zeroes and "
              << ones << " ones!\n";
}
