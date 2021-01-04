/**
 * @file   task_03.cpp
 * @author Victor Nolev
 * @date   24.11.2020
 * @brief  Solution for Task 3 from Practice 4
 */

#include <iostream>

int main() {
     /* Да се напише програма, която приема
      * цяло положително 4-байтово число
      * като вход и принтира цифрите му в обратен ред. */
    unsigned int number;
    std::cin >> number;
    while (number != 0) {
        // Print last digit
        std::cout << number % 10;
        // Remove last digit
        number /= 10;
    }
    return 0;
}
