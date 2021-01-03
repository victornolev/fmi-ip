/**
 * @file   task_08.cpp
 * @author Victor Nolev
 * @date   21.11.2020
 * @brief  Solution for Task 8 from Practice 3.
 * Requirements: Solve task without using loops and further knowledge.
 */

#include <iostream>

int main() {
    /* Напишете програма, която прочита символ
     * и казва дали той е малка, главна или изобщо не е буква. */
    char symbol;
    std::cin >> symbol;
    if (symbol >= 'a' && symbol <= 'z') {
        std::cout << "Entered symbol is a small letter" << std::endl;
    } else if (symbol >= 'A' && symbol <= 'Z') {
        std::cout << "Entered symbol is a capital letter" << std::endl;
    } else {
        std::cout << "Entered symbol is not a letter" << std::endl;
    }
    return 0;
}
