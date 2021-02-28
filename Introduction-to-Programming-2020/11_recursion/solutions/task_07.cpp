/**
 * @file   task_07.cpp
 * @author Victor Nolev
 * @date   04.01.2021
 * @brief  Solution for Task 7 from Practice 11
 */

#include <iostream>

void printPowersTenRec(unsigned int power, unsigned iterator, unsigned long long result);

void printPowersTen(unsigned int power);

int main() {
    unsigned k;
    std::cin >> k;
    printPowersTen(k);

    return 0;
}

void printPowersTenRec(unsigned int power, unsigned int iterator, unsigned long long int result) {
    std::cout << result << ' ';
    if (iterator < power) {
        printPowersTenRec(power, iterator + 1, result * 10);
    }
    std::cout << result << ' ';
}

void printPowersTen(unsigned int power) {
    printPowersTenRec(power, 1, 10);
}
