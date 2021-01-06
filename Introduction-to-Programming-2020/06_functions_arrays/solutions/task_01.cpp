/**
 * @file   task_01.cpp
 * @author Victor Nolev
 * @date   25.11.2020
 * @brief  Solution for Task 1 from Practice 6
 * Requirements: Use fixed size of array - 1024
 */

#include <iostream>

const int MAX_SIZE = 1024;

void readElements(double array[], unsigned size);

void printElements(double array[], unsigned size);

int main() {
    /* Напишете функция, която прочита елементите от конзолата на едномерен
     * масив с дължина n (отново въведена от конзолата) и функция,
     * която изкарва въведените елементи на конзолата.
    */
    unsigned n;
    std::cin >> n;

    double numbers[MAX_SIZE];
    readElements(numbers, n);
    printElements(numbers, n);
    return 0;
}

void readElements(double array[], unsigned size) {
    for (int elementPosition = 0; elementPosition < size; ++elementPosition) {
        std::cin >> array[elementPosition];
    }
}

void printElements(double array[], unsigned size) {
    for (int elementPosition = 0; elementPosition < size; ++elementPosition) {
        std::cout << array[elementPosition] << ' ';
    }
}
