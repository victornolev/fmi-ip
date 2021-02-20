/**
 * @file   task_02.cpp
 * @author Victor Nolev
 * @date   04.01.2021
 * @brief  Solution for Task 2 from Practice 10
 */

#include <iostream>

bool isDigit(char digit);

int main() {
    char digit;
    std::cin >> digit;
    if (isDigit(digit)) {
        std::cout << "Entered symbol is digit\n";
    } else {
        std::cout << "Entered symbol is NOT digit!\n";
    }

    return 0;
}

bool isDigit(char digit) {
    return (digit >= '0' && digit <= '9');
}
