/**
 * @file   task_10.cpp
 * @author Victor Nolev
 * @date   04.01.2021
 * @brief  Solution for Task 10 from Practice 10
 */

#include <iostream>

bool isAlpha(char symbol);

bool isUpper(char letter);

void mostCommonAlpha(char *string);

int main() {
    const int MAX_SIZE = 100;
    char string[MAX_SIZE];
    std::cin.getline(string, MAX_SIZE);
    mostCommonAlpha(string);
    return 0;
}

bool isAlpha(char symbol) {
    return (symbol >= 'a' && symbol <= 'z')
           || (symbol >= 'A' && symbol <= 'Z');
}

bool isUpper(char letter) {
    return (letter >= 'A' && letter <= 'Z');
}

void mostCommonAlpha(char *string) {
    const unsigned int LETTERS_COUNT = 26;

    if (!string) {
        std::cout << "Invalid string passed to function mostCommonAlpha(...)\n";
        return;
    }

    // Count how many times each letter occurs
    // mapping index 0 - 'a',
    // index 1 - 'b'
    // and etc
    size_t timesOccurred[LETTERS_COUNT] = {0,};
    size_t index = 0;

    while (string[index] != '\0') {
        if (isAlpha(string[index])) {
            char currentLetter = string[index];
            if (isUpper(currentLetter)) {
                currentLetter += 'a' - 'A';
            }
            timesOccurred[currentLetter - 'a']++;
        }
        ++index;
    }

    // We have to find a maximum times a letter is founded in the string
    size_t maxIndex = 0;
    for (index = 0; index < LETTERS_COUNT; ++index) {
        if (timesOccurred[maxIndex] < timesOccurred[index]) {
            maxIndex = index;
        }
    }

    std::cout << "The most common letter is found!\n";

    // Now print the letter that is on maxIndex position in string
    std::cout << "The letter \'" << char(maxIndex + 'a') << "\'"
              << " is found " << timesOccurred[maxIndex] << " times in the string\n";
}
