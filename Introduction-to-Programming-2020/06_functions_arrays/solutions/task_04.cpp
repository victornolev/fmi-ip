/**
 * @file   task_04.cpp
 * @author Victor Nolev
 * @date   25.11.2020
 * @brief  Solution for Task 4 from Practice 6
 * Requirements: Use fixed size of array - 1024
 */

#include <iostream>

const int MAX_SIZE = 1024;

void readElements(int array[], unsigned size);

void findMinAndMaxElements(const int numbers[], int size,
                           int &minElement, int &minElementIndex,
                           int &maxElement, int &maxElementIndex);
int main() {
    /* Напишете функции, които намират най-големия/най-малкия
     * елемент в масив, отпечатвайки индекса и стойността му.
     * Пример:
     * Вход:  5
     * 10 44 2 78 1
     * Изход: min_index = 4 min_value = 1 max_index = 3 max_value = 78
     * */
    unsigned size;
    std::cin >> size;

    int numbers[MAX_SIZE];
    readElements(numbers, size);

    int minElement;
    int minElementIndex;
    int maxElement;
    int maxElementIndex;

    findMinAndMaxElements(numbers, size,
                          minElement, minElementIndex,
                          maxElement, maxElementIndex);

    std::cout << "min_index = " << minElementIndex << " min_value = " << minElement
              << " max_index = " << maxElementIndex << " max_value = " << maxElement << '\n';
    return 0;
}

void readElements(int array[], unsigned size) {
    for (int elementPosition = 0; elementPosition < size; ++elementPosition) {
        std::cin >> array[elementPosition];
    }
}

void findMinAndMaxElements(const int numbers[], int size,
                           int &minElement, int &minElementIndex,
                           int &maxElement, int &maxElementIndex) {
    minElement = numbers[0];
    minElementIndex = 0;

    maxElement = numbers[0];
    maxElementIndex = 0;
    for (int i = 0; i < size; ++i) {
        if (numbers[i] < minElement) {
            minElement = numbers[i];
            minElementIndex = i;
        }
        if (numbers[i] > minElement) {
            maxElement = numbers[i];
            maxElementIndex = i;
        }
    }
}
