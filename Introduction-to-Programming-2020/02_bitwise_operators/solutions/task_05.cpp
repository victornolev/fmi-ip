/**
 * @file   task_05.cpp
 * @author Victor Nolev
 * @date   21.11.2020
 * @brief  Solution for Task 5 from Practice 2
 * Requirements: Solve tasks without using loops and further knowledge
 */

#include <iostream>

int main() {
    /* Напишете програма, която прочита 2 цели числа
     * num и n и слага стойност 0 на n-тия бит на num
     * */
    int num;
    int n;
    std::cin >> num >> n;

    int mask = 1;
    mask <<= n;
    // Instead of a mask of type 0...010...0
    // we need a mask of type 1...101...1
    // so we shift the 1 to where 0 should be and invert the bits with (~mask)
    int invertedBitsMask = (~mask);
    int numberWithZeroOnNBit = (num & invertedBitsMask);
    std::cout << numberWithZeroOnNBit << std::endl;
    return 0;
}
