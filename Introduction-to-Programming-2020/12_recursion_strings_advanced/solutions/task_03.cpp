/**
 * @file   task_03.cpp
 * @author Victor Nolev
 * @date   04.01.2021
 * @brief  Solution for Task 3 from Practice 12
 */

#include <iostream>
#include <cstring>

const unsigned int WORDS_COUNT = 2;
const unsigned int MAX_INPUT = 1024;

bool isInDictionary(const char *dictionary[], char *word);

int main() {
    const char *dictionary[] = {"cats", "dogs"};

    char input[MAX_INPUT];
    std::cin.getline(input, MAX_INPUT);

    // Check each word from input if it is in the dictionary

    // Extract first word
    char *currentWord = std::strtok(input, " ");
    unsigned int matchingWords = 0;
    while (currentWord != nullptr) {
        if (isInDictionary(dictionary, currentWord)) {
            ++matchingWords;
        }
        // Extract the next word from input string
        currentWord = std::strtok(nullptr, " ");
    }
    std::cout << matchingWords << '\n';

    return 0;
}

bool isInDictionary(const char *dictionary[], char *word) {
    for (size_t i = 0; i < WORDS_COUNT; ++i) {
        // Check if the word on position i in the dictionary is as same as the given word
        if (std::strcmp(word, dictionary[i]) == 0) {
            return true;
        }
    }
    return false;
}

