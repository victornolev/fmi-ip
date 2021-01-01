/**
 * @file   task_04.cpp
 * @author Victor Nolev
 * @date   21.11.2020
 * @brief  Solution for Task 4 from Practice 1
 */

#include <iostream>

int main() {
    // Too basic variable names :D
    int p, q;
    std::cin >> p >> q;
    int quotient = p / q;
    int remainder = p % q;
    std::cout << "quotient = " << quotient << ", "
              << "remainder = " << remainder << '\n';
    return 0;
}
