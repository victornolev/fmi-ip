/**
 * @file   task_03.cpp
 * @author Victor Nolev
 * @date   07.12.2020
 * @brief  Solution for Task 3 from Practice 7
 * Requirements: Use fixed size of array - 1024
 */

#include <iostream>

const int MAX_SIZE = 1024;

void readElements(int numbers[], size_t elementsCount);

bool removeElement(int numbers[], size_t &size, size_t elementToRemove);

void printElements(const int numbers[], size_t size);

int main() {
    /* Напишете функция, която изтрива елемент от сортиран във възходящ ред масив,
     * като след изтриването, масивът остава сортиран.
     * Пример:
     *
     * Вход:   1 4 7 12 32 59
     * 7
     * Изход:  1 4 12 32 59
     * */
    size_t size;
    std::cin >> size;

    int numbers[MAX_SIZE];
    readElements(numbers, size);

    size_t elementToRemove;
    std::cin >> elementToRemove;

    if (!removeElement(numbers, size, elementToRemove)) {
        std::cerr << "Element is not found in the array!\n";
        return 1;
    }
    printElements(numbers, size);
    return 0;
}

void readElements(int numbers[], size_t elementsCount) {
    for (size_t i = 0; i < elementsCount; ++i) {
        std::cin >> numbers[i];
    }
}

bool removeElement(int numbers[], size_t &size, size_t elementToRemove) {
    unsigned indexElementToRemove = -1;
    bool isFound = false;
    for (int i = 0; i < size; ++i) {
        if (numbers[i] == elementToRemove) {
            isFound = true;
            indexElementToRemove = i;
            break;
        }
    }

    for (size_t i = indexElementToRemove; i < size - 1; ++i) {
        numbers[i] = numbers[i + 1];
    }
    --size;
    return isFound;
}

void printElements(const int numbers[], size_t size) {
    for (size_t i = 0; i < size; ++i) {
        std::cout << numbers[i] << ' ';
    }
}
