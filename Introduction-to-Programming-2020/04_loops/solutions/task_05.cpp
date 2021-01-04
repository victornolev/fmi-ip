/**
 * @file   task_05.cpp
 * @author Victor Nolev
 * @date   24.11.2020
 * @brief  Solution for Task 5 from Practice 4
 */

#include <iostream>

int main() {
    /* Да се напише програма, която прочита получава
     * цяло положително 4-байтово число
     * и изкарва неговото двоично представяне.
     *  Вход: 567
     *  Изход: 00000000 00000000 00000010 00110111
     * */
    const int LAST_BIT_POSITION = 31;
    const int LSB_POSITION = 0;

    unsigned integer;
    std::cin >> integer;

    // Start iteration from the last bit position
    for (int i = LAST_BIT_POSITION; i >= LSB_POSITION; --i) {
        int mask = 1 << i;
        int currentBit = (integer & mask) ? 1 : 0;
        std::cout << currentBit;

        // Print whitespace after every byte (to beautify the sequence)
        bool are8Bits = (i % 8) == 0;
        if (are8Bits) {
            std::cout << ' ';
        }
    }
    std::cout << std::endl;
    return 0;
}
