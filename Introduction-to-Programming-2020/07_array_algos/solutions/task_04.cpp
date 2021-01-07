/**
 * @file   task_04.cpp
 * @author Victor Nolev
 * @date   07.12.2020
 * @brief  Solution for Task 4 from Practice 7
 * Requirements: Use fixed size of array - 1024
 */

#include <iostream>

const int MAX_SIZE = 1024;

void readElements(int numbers[], size_t elementsCount);

void sortEvenNumbers(int srcArray[], size_t srcArraySize, int destArray[], size_t &destSize);

bool insertElement(int numbers[], size_t &size, int element);

void printElements(const int numbers[], size_t size);

int main() {
    /* Напишете фунцкия, която приема два масива arr_1 и arr_2, като
    * "филтрира" всички четни елементи от arr_1 в arr_2 в сортиран вид.
    * Пример:
    * arr_1: { 3, 12, 5, 2, 3, 8, 4 }
    * arr_2: { 2, 4, 8, 12 }
    * */
    size_t size;
    std::cin >> size;

    int arr_1[MAX_SIZE];

    int arr_2[MAX_SIZE];
    size_t destSize = 0;

    readElements(arr_1, size);
    sortEvenNumbers(arr_1, size, arr_2, destSize);
    printElements(arr_2, destSize);
    return 0;
}

void readElements(int numbers[], size_t elementsCount) {
    for (size_t i = 0; i < elementsCount; ++i) {
        std::cin >> numbers[i];
    }
}

void sortEvenNumbers(int srcArray[], size_t srcArraySize, int destArray[], size_t &destSize) {
    if (destSize != 0) {
        return;
    }

    for (int i = 0; i < srcArraySize; ++i) {
        if (srcArray[i] % 2 == 0) {
            insertElement(destArray, destSize, srcArray[i]);
        }
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
