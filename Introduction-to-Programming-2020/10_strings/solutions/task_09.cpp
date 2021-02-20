/**
 * @file   task_09.cpp
 * @author Victor Nolev
 * @date   04.01.2021
 * @brief  Solution for Task 9 from Practice 10
 */

#include <iostream>
#include <cstring>

bool isAlpha(char symbol);

bool isVowel(char letter);

char *compact(char *string);

int main() {
    const int MAX_SIZE = 100;
    char string[MAX_SIZE];
    std::cin.getline(string, MAX_SIZE);

    char *noVowelsString = compact(string);
    if (!noVowelsString) {
        std::cout << "Internal error! Not enough memory?\n";
        return 1;
    }
    std::cout << noVowelsString;

    return 0;
}

bool isAlpha(char symbol) {
    return (symbol >= 'a' && symbol <= 'z')
           || (symbol >= 'A' && symbol <= 'Z');
}

bool isVowel(char letter) {
    if (!isAlpha(letter)) {
        return false;
    }
    letter = tolower(letter);

    return letter == 'a'
           || letter == 'e'
           || letter == 'i'
           || letter == 'u'
           || letter == 'o'
           || letter == 'y';
}

char *compact(char *string) {
    char *buffer = new(std::nothrow) char[strlen(string) + 1];
    if (!buffer) {
        std::cout << "Error! Can not allocate memory for buffer!\n";
        return nullptr;
    }

    size_t index = 0;
    // Keep current index of the buffer
    size_t indexBuffer = 0;
    while (string[index] != '\0') {
        if (!isVowel(string[index])) {
            buffer[indexBuffer] = string[index];
            ++indexBuffer;
        }
        ++index;
    }
    // Last char is always terminating zero
    buffer[++indexBuffer] = '\0';

    // Allocate as much memory as we need!
    // No more, no less!
    char *result = new(std::nothrow) char[strlen(buffer) + 1];
    if (!result) {
        std::cout << "Error! Can not allocate memory to result string without vowels!\n";
        std::cout << "Returning result string with no exact allocated memory...\n";
        result = buffer;
        return result;
    }

    strcpy(result, buffer);

    // Free up allocated memory that is not necessary anymore
    delete[] buffer;

    return result;
}
