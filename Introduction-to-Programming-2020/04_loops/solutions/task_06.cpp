/**
 * @file   task_06.cpp
 * @author Victor Nolev
 * @date   24.11.2020
 * @brief  Solution for Task 6 from Practice 4
 */

#include <iostream>

int main() {
    /* Напишете програма, която да преброи колко
     * единици и нули има в двоичното представяне на дадено цяло число.
     * Вход: 22
     * Изход: Ones -> 3
     * Zeros -> 29
     * */
    const int LAST_BIT_POSITION = 31;
    const int LSB_POSITION = 0;

    unsigned integer;
    std::cin >> integer;

    int zerosCount = 0;
    int onesCount = 0;
    // Convert integer to bytes and count each 1 and 0
    for (int i = LAST_BIT_POSITION; i >= LSB_POSITION; --i) {
        int mask = 1 << i;
        int currentBit = (integer & mask) ? 1 : 0;

        if (currentBit) {
            ++onesCount;
        } else {
            ++zerosCount;
        }
    }
    std::cout << "Ones -> " << onesCount << std::endl;
    std::cout << "Zeros -> " << zerosCount << std::endl;
    return 0;
}
