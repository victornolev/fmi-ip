/**
 * @file   task_08.cpp
 * @author Victor Nolev
 * @date   25.11.2020
 * @brief  Solution for Task 8 from Practice 6
 * Requirements: Use fixed size of array - 1024
 */

#include <iostream>

const int MAX_SIZE = 1024;

void readElements(int array[], unsigned size);

int findDifferenceOfProductAndSum(const int numbers[], unsigned size);

int main() {
     /* Напишете функция, която връща разликата на произведението на елементите
      * с четни индекси (P) и сумата на елементите с нечетни индекси (S).
      * (P - S) = ?
      * Пример:
      * Вход:  5
      * 4 2 7 4 1
      * Изход: 22
      * */
    unsigned n;
    std::cin >> n;

    int numbers[MAX_SIZE];
    readElements(numbers, n);
    int difference = findDifferenceOfProductAndSum(numbers, n);
    std::cout << difference << '\n';
    return 0;
}

void readElements(int array[], unsigned size) {
    for (int elementPosition = 0; elementPosition < size; ++elementPosition) {
        std::cin >> array[elementPosition];
    }
}

int findDifferenceOfProductAndSum(const int numbers[], unsigned size) {
    int difference = 0;
    int productElements = 1; // Product of elements on even indexes
    int sumElements = 0; // Sum of elements on odd indexes

    for (int i = 0; i < size; ++i) {
        bool isEven = i % 2 == 0;

        if (isEven) {
            productElements *= numbers[i];
        } else {
            sumElements += numbers[i];
        }
    }
    difference = productElements - sumElements;
    return difference;
}
