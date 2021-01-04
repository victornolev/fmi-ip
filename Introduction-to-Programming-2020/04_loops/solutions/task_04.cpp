/**
 * @file   task_04.cpp
 * @author Victor Nolev
 * @date   24.11.2020
 * @brief  Solution for Task 4 from Practice 4
 */

#include <iostream>

int main() {
    /* По въведено цяло положително число n
     * програмата да прочита n на брой цели числа,
     * а след това да отпечатва тяхното средно аритметично.
     * */
    unsigned n;
    std::cin >> n;

    int number;
    int sumNumbers = 0;
    for (int enteredNumbers = 0; enteredNumbers < n; ++enteredNumbers) {
        std::cin >> number;
        sumNumbers += number;
    }
    // Cast sum to float (or double) to have precise calculations with floating point numbers
    double average = (float) sumNumbers / n;
    std::cout << average << std::endl;
    return 0;
}
