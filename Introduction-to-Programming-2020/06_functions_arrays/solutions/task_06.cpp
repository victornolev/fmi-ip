/**
 * @file   task_06.cpp
 * @author Victor Nolev
 * @date   25.11.2020
 * @brief  Solution for Task 6 from Practice 6
 * Requirements: Use fixed size of array - 1024
 */

#include <iostream>

const int MAX_SIZE = 1024;

void readElements(int array[], unsigned size);

int sumNumbers(const int numbers[], unsigned size);

int productNumbers(const int numbers[], unsigned size);

int main() {
    /* Напишете функции, които връщат сбора и произведението на всички елементи
     * в масив с размер n.
     * Пример:
     * Вход: 3
     * 1 2 3
     * Изход: sum = 6, product = 6
     * */
    unsigned n;
    std::cin >> n;

    int numbers[MAX_SIZE];
    readElements(numbers, n);

    int sum = sumNumbers(numbers, n);
    int product = productNumbers(numbers, n);
    std::cout << "sum = " << sum << ", product = " << product << '\n';
    return 0;
}

void readElements(int array[], unsigned size) {
    for (int elementPosition = 0; elementPosition < size; ++elementPosition) {
        std::cin >> array[elementPosition];
    }
}

int sumNumbers(const int numbers[], unsigned size) {
    int sumNumbers = 0;
    for (size_t i = 0; i < size; ++i) {
        sumNumbers += numbers[i];
    }
    return sumNumbers;
}

int productNumbers(const int numbers[], unsigned size) {
    int productNumbers = 1;
    for (size_t i = 0; i < size; ++i) {
        productNumbers *= numbers[i];
    }
    return productNumbers;
}
