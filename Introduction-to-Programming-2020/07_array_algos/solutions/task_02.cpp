/**
 * @file   task_02.cpp
 * @author Victor Nolev
 * @date   07.12.2020
 * @brief  Solution for Task 2 from Practice 7
 * Requirements: Use fixed size of array - 1024
 */

#include <iostream>

const int MAX_SIZE = 1024;

void readElements(int numbers[], size_t elementsCount);

bool insertElement(int numbers[], size_t &size, int element);

void printElements(const int numbers[], size_t size);

int main() {
    /* Напишете функция, която вмъква елемент в сортиран във възходящ ред масив,
     * като след вмъкването, масивът остава сортиран.
     * Ако напълним целия масив, при следващо добавяне изваждаме съобщение за грешка.
     * Пример:
     *
     * Вход:   1 4 7 12 32 59
     * 15
     * Изход:  1 4 7 12 15 32 59 */
    size_t size;
    std::cin >> size;

    int numbers[MAX_SIZE];
    readElements(numbers, size);

    int newElement = 0;
    std::cin >> newElement;

    bool isInserted = insertElement(numbers, size, newElement);
    if (!isInserted) {
        std::cerr << "Error! Can not insert element!\n";
    }
    printElements(numbers, size);
    return 0;
}

void readElements(int numbers[], size_t elementsCount) {
    for (size_t i = 0; i < elementsCount; ++i) {
        std::cin >> numbers[i];
    }
}

bool insertElement(int numbers[], size_t &size, int element) {
    if (size >= MAX_SIZE) {
        return false;
    }
    size_t i;
    for (i = size - 1; (i >= 0 && numbers[i] > element); --i) {
        numbers[i + 1] = numbers[i];
    }
    numbers[i + 1] = element;
    ++size;
    return true;
}

void printElements(const int numbers[], size_t size) {
    for (size_t i = 0; i < size; ++i) {
        std::cout << numbers[i] << ' ';
    }
}
