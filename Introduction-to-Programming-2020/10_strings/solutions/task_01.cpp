/**
 * @file   task_01.cpp
 * @author Victor Nolev
 * @date   04.01.2021
 * @brief  Solution for Task 1 from Practice 10
 */

#include <iostream>

bool isAlpha(char symbol);

int main() {
    char symbol;    
    std::cin >> symbol;
    if (isAlpha(symbol)) {
        std::cout << "Entered symbol is letter\n";
    } else {
        std::cout << "Entered symbol is NOT letter!\n";
    }
    
    return 0;
}

bool isAlpha(char symbol) {
    return (symbol >= 'a' && symbol <= 'z')
           || (symbol >= 'A' && symbol <= 'Z');
}
