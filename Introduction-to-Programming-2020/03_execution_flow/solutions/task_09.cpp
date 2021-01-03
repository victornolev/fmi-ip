/**
 * @file   task_09.cpp
 * @author Victor Nolev
 * @date   21.11.2020
 * @brief  Solution for Task 9 from Practice 3.
 * Requirements: Solve task without using loops and further knowledge.
 */

#include <iostream>

int main() {
    int day;
    std::cin >> day;
    switch (day) {
        case 1:
            std::cout << "Monday" << std::endl;
            break;
        case 2:
            std::cout << "Tuesday" << std::endl;
            break;
        case 3:
            std::cout << "Wednesday" << std::endl;
            break;
        case 4:
            std::cout << "Thursday" << std::endl;
            break;
        case 5:
            std::cout << "Friday" << std::endl;
            break;
        case 6:
            std::cout << "Saturday" << std::endl;
            break;
        case 7:
            std::cout << "Sunday" << std::endl;
            break;
        default:
            std::cout << "Invalid day of the week!" << std::endl;
            break;
    }
    return 0;
}
