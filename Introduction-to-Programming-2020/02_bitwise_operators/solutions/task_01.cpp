/**
 * @file   task_01.cpp
 * @author Victor Nolev
 * @date   21.11.2020
 * @brief  Solution for Task 1 from Practice 2
 * Requirements: Solve tasks without using cycles and further knowledge
 */

#include <iostream>

int main() {
    /*  Напишете програма, която прочита цяло положително число
      unsigned int - А и три числа показващи позиции на битове -
      а1, а2, а3 в интервала [0;31]. Програмата да пресметне
      числото А’ получено от А, чрез вдигане на битовете
      на позиции а1, а2, а3 и да отпечата на екрана
      разликата А’ - А.*/

    unsigned int A;
    std::cout << "Enter a number:";
    std::cin >> A;

    unsigned a1, a2, a3;
    std::cout << "Enter 3 bit positions:";
    std::cin >> a1 >> a2 >> a3;

    unsigned APrim = A;

    unsigned mask = 1;
    APrim |= (mask << a1);
    APrim |= (mask << a2);
    APrim |= (mask << a3);

    std::cout << "The value of A' is " << APrim << std::endl;
    std::cout << "A' - A = " << APrim - A << std::endl;
    return 0;
}
