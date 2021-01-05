/**
 * @file   task_02.cpp
 * @author Victor Nolev
 * @date   24.11.2020
 * @brief  Solution for Task 2 from Practice 5
 */

#include <iostream>

int main() {
     /* По въведено цяло положително число N
      * програмата да прочита N на брой цели числа,
      * а след това да отпечатва сумата от цифрите им.
      *  Вход:  3
      *  11 255 42
      *  Изход: 20 // 1 + 1 + 2 + 5 + 5 + 4 + 2
      */
    unsigned totalIntegers;
    std::cin >> totalIntegers;

    unsigned integer;
    unsigned digitsSum = 0; // Sum of digits of each integer
    for (int i = 0; i < totalIntegers ; ++i) {
        std::cin >> integer;
        while (integer)
        {
            unsigned currentDigit = integer % 10;
            digitsSum += currentDigit;
            integer /= 10;
        }
    }
    std::cout << digitsSum << std::endl;
    return 0;
}
