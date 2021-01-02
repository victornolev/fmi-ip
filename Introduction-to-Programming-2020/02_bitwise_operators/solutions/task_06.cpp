/**
 * @file   task_06.cpp
 * @author Victor Nolev
 * @date   21.11.2020
 * @brief  Solution for Task 6 from Practice 2
 * Requirements: Solve tasks without using loops and further knowledge
 */

#include <iostream>

int main() {
    /* Напишете програма, която прочита цяло число
    * и казва дали то е нечетно
    * (използвайки само побитови операции)
    * */
    int number;
    std::cin >> number;
    // If the least significant bit is raised (1)
    // then the number is odd otherwise it is even
    std::cout << "Entered number is odd: " << ((number & 1) ? "True" : "False") << std::endl;
    return 0;
}
