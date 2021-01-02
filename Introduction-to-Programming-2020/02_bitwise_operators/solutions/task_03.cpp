/**
 * @file   task_03.cpp
 * @author Victor Nolev
 * @date   21.11.2020
 * @brief  Solution for Task 3 from Practice 2
 * Requirements: Solve tasks without using loops and further knowledge
 */

#include <iostream>

int main() {
    /* Имплементирайте програма, която получава
      * едно двубайтово число на стандартния си вход
      * и го отпечатва с разменени битове.
      * Вход:  19006 // 0b01001010'00111110
      * Изход: 15946 // 0b00111110'01001010
      * */
    const short TIMES_TO_SHIFT = 8;

    short twoBytesNumber;
    std::cin >> twoBytesNumber;

    const short MASK = 0xFF;
    // Get the first byte using & (bitwise AND) with mask 0b1111 1111
    short firstByte = (twoBytesNumber & MASK);
    short secondByte = (twoBytesNumber >> TIMES_TO_SHIFT);
    short swappedBytesNumber = ((firstByte << TIMES_TO_SHIFT) | secondByte);
    std::cout << "Number with swapped bytes is: " << swappedBytesNumber << std::endl;
    return 0;
}
