/**
 * @file   task_02.cpp
 * @author Victor Nolev
 * @date   04.01.2021
 * @brief  Solution for Task 2 from Practice 12
 */

#include <iostream>

bool hasSameDigitsRec(unsigned int integer, unsigned short currentDigit);

bool hasSameDigits(int integer);

int main() {
    int integer;
    std::cin >> integer;

    if (integer <= 0) {
        std::cout << "Please enter positive integer!\n";
    }

    std::cout << "Number has same digits: ";
    if (hasSameDigits(integer)) {
        std::cout << "Yes\n";
    } else {
        std::cout << "No\n";
    }

    return 0;
}

bool hasSameDigitsRec(unsigned int integer, unsigned short currentDigit) {
    if (integer < 10) {
        return integer == currentDigit;
    }

    if (integer % 10 == currentDigit) {
        return true;
    }

    // Check all digits of integer with the current digit
    if (hasSameDigitsRec(integer / 10, currentDigit)) {
        return true;
    } else {
        // Get next digit of integer and try again
        return hasSameDigitsRec(integer / 10, integer % 10);
    }
}

bool hasSameDigits(int integer) {
    if (integer < 10) {
        return false;
    }
    return hasSameDigitsRec(integer / 10, integer % 10);
}
