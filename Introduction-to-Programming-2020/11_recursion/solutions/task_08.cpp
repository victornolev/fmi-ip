/**
 * @file   task_08.cpp
 * @author Victor Nolev
 * @date   04.01.2021
 * @brief  Solution for Task 8 from Practice 11
 */

#include <iostream>

unsigned gcd(int integer1, int integer2);

int main() {
    unsigned integer1;
    unsigned integer2;
    std::cin >> integer1 >> integer2;
    std::cout << "Greatest Common Divisor is: " << gcd(integer1, integer2) << '\n';

    return 0;
}

unsigned gcd(int integer1, int integer2) {
    if (integer2 == 0) {
        return integer1;
    } else {
        return gcd(integer2, integer1 % integer2);
    }
}
