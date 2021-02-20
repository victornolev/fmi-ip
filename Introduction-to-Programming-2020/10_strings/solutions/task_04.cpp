/**
 * @file   task_04.cpp
 * @author Victor Nolev
 * @date   04.01.2021
 * @brief  Solution for Task 4 from Practice 10
 */

#include <iostream>

void changeSymbols(char *string, char toChange, char changeWith);

int main() {
    const int MAX_SIZE = 100;
    char string[MAX_SIZE];
    // std::cin >> string;
    // We use getline() to be more explicit with the max number of elements in the array
    std::cin.getline(string, MAX_SIZE);

    // Char to change
    char c1;
    // Char to replace with
    char c2;
    std::cin >> c1 >> c2;
    changeSymbols(string, c1, c2);
    std::cout << string;

    return 0;
}

void changeSymbols(char *string, char toChange, char changeWith) {
    if (!string) {
        std::cout << "Invalid string!\n";
        return;
    }

    size_t index = 0;
    while (string[index] != '\0') {
        if (string[index] == toChange) {
            string[index] = changeWith;
        }
        ++index;
    }
}
