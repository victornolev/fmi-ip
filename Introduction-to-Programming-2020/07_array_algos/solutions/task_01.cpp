/**
 * @file   task_01.cpp
 * @author Victor Nolev
 * @date   07.12.2020
 * @brief  Solution for Task 1 from Practice 7
 * Requirements: Use fixed size of array - 1024
 */

#include <iostream>

const int MAX_SIZE = 1024;

void readElements(double numbers[], size_t elementsCount);

bool isSortedDescendingOrder(const double numbers[], unsigned elementsCount);

int main() {
    size_t size;
    std::cin >> size;

    double numbers[MAX_SIZE];
    readElements(numbers, size);

    if (isSortedDescendingOrder(numbers, size)) {
        std::cout << "The array is sorted in descending order! \n";
    } else {
        std::cout << "The array is not sorted in descending order! \n";
    }

    return 0;
}

void readElements(double numbers[], size_t elementsCount) {
    for (size_t i = 0; i < elementsCount; ++i) {
        std::cin >> numbers[i];
    }
}

bool isSortedDescendingOrder(const double numbers[], unsigned elementsCount) {
    for (int i = 0; i < elementsCount; ++i) {
        if (numbers[i + 1] > numbers[i]) {
            return false;
        }
    }
    return true;
}
