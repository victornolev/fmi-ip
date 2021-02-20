/**
 * @file   task_07.cpp
 * @author Victor Nolev
 * @date   04.01.2021
 * @brief  Solution for Task 7 from Practice 10
 */

#include <iostream>
#include <cstring>

void reverse(char *string);

int main() {
    const int MAX_SIZE = 100;
    char string[MAX_SIZE];
    // std::cin >> string;
    // We use getline() to be more explicit with the max number of elements in the array
    std::cin.getline(string, MAX_SIZE);
    reverse(string);
    std::cout << string;

    return 0;
}

void reverse(char *string) {
    if (!string) {
        std::cout << "Invalid string!\n";
        return;
    }
    size_t index = 0;
    size_t length = strlen(string);
    size_t lastIndexToWatch = length / 2;
    while (index < lastIndexToWatch) {
        // Swap values of chars
        // char copyChar = string[index];
        // string[index] = string[length - (index + 1)];
        // string[length - (index + 1)] = copyChar;
        std::swap(string[index], string[length - (index + 1)]);
        ++index;
    }
}
