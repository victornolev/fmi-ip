/**
 * @file   task_04.cpp
 * @author Victor Nolev
 * @date   24.11.2020
 * @brief  Solution for Task 4 from Practice 5
 */

#include <iostream>

int absolute(int number);

int main() {
    int number;
    std::cin >> number;
    std::cout << absolute(number) << std::endl;
    return 0;
}

int absolute(int number) {
    return number < 0 ? -number : number;
}
