/**
 * @file   task_05.cpp
 * @author Victor Nolev
 * @date   21.11.2020
 * @brief  Solution for Task 5 from Practice 3.
 * Requirements: Solve task without using loops and further knowledge.
 */

#include <iostream>

int main() {
    int a, b, c;
    std::cin >> a >> b >> c;
    if (a <= 0 || b <= 0 || c <= 0) {
        std::cout << "Invalid length of a side!" << std::endl;
        return 1;
    }

    // Three sides form a triangle if any two sides are greater than the third
    if (a + b > c && a + c > b && b + c > a) {
        std::cout << "Entered three sides form a triangle!" << std::endl;
    } else {
        std::cout << "Entered three sides does not form a triangle!" << std::endl;
    }
    return 0;
}
