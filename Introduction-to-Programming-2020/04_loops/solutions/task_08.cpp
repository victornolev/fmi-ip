/**
 * @file   task_08.cpp
 * @author Victor Nolev
 * @date   24.11.2020
 * @brief  Solution for Task 8 from Practice 4
 */

#include <iostream>

int main() {
    /* Напишете програма, която прочита цяло
     * положително число и намира позицията на най-старшия значещ бит.
     *  Вход:  45 // 101101
     *  Изход: 5
     * */
    const int LAST_BIT_POSITION = 31;
    const int LSB_POSITION = 0;

    unsigned integer;
    std::cin >> integer;

    unsigned msbPosition = 0; // Position of the most significant bit in integer
    for (int currentPosition = LAST_BIT_POSITION; currentPosition >= LSB_POSITION; --currentPosition) {
        int mask = 1 << currentPosition;
        int currentBit = (integer & mask) ? 1 : 0;
        if (currentBit) {
            msbPosition = currentPosition;
            break;
        }
    }
    std::cout << msbPosition << std::endl;
    return 0;
}
