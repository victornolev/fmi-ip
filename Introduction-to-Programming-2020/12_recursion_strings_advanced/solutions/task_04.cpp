/**
 * @file   task_04.cpp
 * @author Victor Nolev
 * @date   04.01.2021
 * @brief  Solution for Task 4 from Practice 12
 */

#include <iostream>

const int MAX = 16;

void fill(char cross[][MAX], size_t size);

bool checkWord(char cross[][MAX], size_t size, size_t row, size_t column);

int checkCross(char cross[][MAX], size_t size);

int main() {
    unsigned int size;
    std::cin >> size;

    char cross[MAX][MAX];
    fill(cross, size);
    std::cout << "There are " << checkCross(cross, size) << " matching words!\n";

    return 0;
}

void fill(char cross[][MAX], size_t size) {
    for (size_t i = 0; i < size - 1; ++i) {
        std::cin >> cross[i];
    }
}

bool checkWord(char cross[][MAX], size_t size, size_t row, size_t column) {
    for (size_t i = 0; i < size - 1; ++i) {
        if (cross[row][i] != cross[i][column]) {
            return false;
        }
    }
    return true;
}

int checkCross(char cross[][MAX], size_t size) {
    int matchingWords = 0;
    for (size_t row = 0; row < size - 1; ++row) {
        for (size_t column = 0; column < size - 1; ++column) {
            if (checkWord(cross, size, row, column)) {
                ++matchingWords;
            }
        }
    }
    return matchingWords;
}

