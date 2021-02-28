/**
 * @file   task_01.cpp
 * @author Victor Nolev
 * @date   04.01.2021
 * @brief  Solution for Task 1 from Practice 11
 */

#include <iostream>

unsigned factorial(unsigned integer);

int main() {
    unsigned n;
    std::cin >> n;
    std::cout << factorial(n);

    return 0;
}

unsigned factorial(unsigned integer) {
    if (integer == 0 || integer == 1) {
        return 1;
    }
    return integer * factorial(integer - 1);
}
