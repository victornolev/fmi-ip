/**
 * @file   task_04.cpp
 * @author Victor Nolev
 * @date   21.11.2020
 * @brief  Solution for Task 4 from Practice 2
 * Requirements: Solve tasks without using loops and further knowledge
 */

#include <iostream>

int main() {
    /* Напишете програма, която прочита 2 цели числа
     * num и n и принтира стойността на n-тия бит на num.
     *  Вход:
     *  19006 // 0b01001010'00111110
     *  5
     *  Изход: 1
     * */
    int num;
    int n;
    std::cin >> num >> n;
    
    int mask = 1 << n;
    int nBit = (num & mask) ? 1 : 0;
    std::cout << nBit << std::endl;
    return 0;
}
