/**
 * @file   task_03.cpp
 * @author Victor Nolev
 * @date   04.01.2021
 * @brief  Solution for Task 3 from Practice 10
 */

#include <iostream>

void toUpper(char *string);

void toLower(char *string);

bool isUpper(char letter);

bool isAlpha(char symbol);


int main() {
    const int MAX_SIZE = 100;
    char string[MAX_SIZE];
    // std::cin >> string;
    // We use getline() to be more explicit with the max number of elements in the array
    std::cin.getline(string, MAX_SIZE);
    toUpper(string);
    std::cout << string;

    std::cout << '\n';

    toLower(string);
    std::cout << string;
    return 0;
}

void toUpper(char *string) {
    if (!string) {
        std::cout << "Invalid string!\n";
        return;
    }

    size_t indexLetter = 0;
    while (string[indexLetter] != '\0') {

        if (isAlpha(string[indexLetter])
            && !isUpper(string[indexLetter])) {
            string[indexLetter] -= 'a' - 'A';
        }
        ++indexLetter;
    }
}

void toLower(char *string) {
    if (!string) {
        std::cout << "Invalid string!\n";
        return;
    }

    size_t indexLetter = 0;
    while (string[indexLetter] != '\0') {
        if (isAlpha(string[indexLetter])
            && isUpper(string[indexLetter])) {
            string[indexLetter] += 'a' - 'A';
        }
        ++indexLetter;
    }
}

bool isUpper(char letter) {
    return (letter >= 'A' && letter <= 'Z');
}

bool isAlpha(char symbol) {
    return (symbol >= 'a' && symbol <= 'z')
           || (symbol >= 'A' && symbol <= 'Z');
}
