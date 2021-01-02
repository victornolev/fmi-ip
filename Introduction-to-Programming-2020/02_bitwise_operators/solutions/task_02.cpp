/**
 * @file   task_02.cpp
 * @author Victor Nolev
 * @date   21.11.2020
 * @brief  Solution for Task 2 from Practice 2
 * Requirements: Solve tasks without using loops and further knowledge
 */

#include <iostream>

int main() {
    /* Реализирайте програма, която прочита цяло положително число
      * unsigned int А и отпечатва стойноста на числото А’,
      * получено при обръщане на първите 16 бита на А.
      *  Вход:  19006 // 0b01001010'00111110
      *  Изход: 46529 // 0b10110101'11000001
      * */
    unsigned A;
    std::cin >> A;

    const int MASK = 0xFFFF; // 0b11111111 11111111
    unsigned APrime = A ^ MASK;

    std::cout << APrime << std::endl;
    return 0;
}
