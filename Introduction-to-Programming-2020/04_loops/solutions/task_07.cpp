/**
 * @file   task_07.cpp
 * @author Victor Nolev
 * @date   24.11.2020
 * @brief  Solution for Task 7 from Practice 4
 */

#include <iostream>

int main() {
    /* Да се състави програма, която приема като входни данни
      * цели 4-байтови числа, елементи на монотонно растяща редица,
      * всяко от които в интервала [0;100].
      * Програмата приключва, при първата въведена стойност,
      * непринадлежаща на редицата. Отпечатайте броя на числата от редицата.
      *  Вход:  1 2 3 4 5 3 // спира на втората 3-ка
      *  Изход: 5
      * */
    unsigned integersCount = 0;
    unsigned previousInteger = 0;

    unsigned currentInteger;
    std::cin >> currentInteger;
    while (currentInteger >= previousInteger) {
        ++integersCount;
        previousInteger = currentInteger;

        // Enter new integer of the sequence
        std::cin >> currentInteger;
        if (currentInteger < 0 || currentInteger > 100) {
            std::cerr << "Invalid integer! Enter integer in range [0; 100]" << std::endl;
            break;
        }
    }
    std::cout << integersCount << std::endl;
    return 0;
}
