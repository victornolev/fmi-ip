/**
 * @file   task_05.cpp
 * @author Victor Nolev
 * @date   07.12.2020
 * @brief  Solution for Task 5 from Practice 7
 */

#include <iostream>

const int MIN_SIZE = 1;
const int MAX_SIZE = 1000;

void readElements(float numbers[], size_t elementsCount);

void deleteElement(float *numbers, size_t &size, size_t deleteAtIndex);

float getAverage(const float numbers[], size_t size);

void removeNumbersBelowAverage(float numbers[], size_t &n);

void printElements(const float numbers[], size_t size);

int main() {
    /* Въведете цяло число N, не по-голямо от 1000, следвано от N числа с плаваща точка.
      * Съхранете ги в масив. Изведете го на екрана. След това премахнете всички числа
      * от масива, по-малки от средно-аритметичното на всички въведени числа
      * и отново изведете числата на екрана.
      * Пример:
      * Вход:
      * 10
      * 1 2 3 3 2 4 2 1 2 3
      * Изход:
      * 1 2 3 3 2 4 2 1 2 3
      * 3 3 4 3
      * */
    size_t n;
    std::cin >> n;

    if (n < MIN_SIZE || n > MAX_SIZE) {
        std::cerr << "N should be [1; 1000]!";
    }
    float numbers[MAX_SIZE];
    readElements(numbers, n);
    printElements(numbers, n);

    removeNumbersBelowAverage(numbers, n);
    std::cout << '\n';
    printElements(numbers, n);
    return 0;
}

void readElements(float numbers[], size_t elementsCount) {
    for (size_t i = 0; i < elementsCount; ++i) {
        std::cin >> numbers[i];
    }
}

void deleteElement(float *numbers, size_t &size, size_t deleteAtIndex) {
    for (size_t i = deleteAtIndex; i < size - 1; ++i) {
        numbers[i] = numbers[i + 1];
    }
    --size;
}

float getAverage(const float numbers[], size_t size) {
    float sumNumbers = 0;
    for (size_t i = 0; i < size; ++i) {
        sumNumbers += numbers[i];
    }
    return sumNumbers / size;
}

void removeNumbersBelowAverage(float numbers[], size_t &n) {
    float average = getAverage(numbers, n);

    // Remove all numbers from array that are less than average
    for (int i = 0; i < n; ++i) {
        if (numbers[i] < average) {
            deleteElement(numbers, n, i);
            --i;
        }
    }
}

void printElements(const float numbers[], size_t size) {
    for (size_t i = 0; i < size; ++i) {
        std::cout << numbers[i] << ' ';
    }
}
