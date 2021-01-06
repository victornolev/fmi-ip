/**
 * @file   task_02.cpp
 * @author Victor Nolev
 * @date   25.11.2020
 * @brief  Solution for Task 2 from Practice 6
 * Requirements: Use fixed size of array - 1024
 */

#include <iostream>

const int MAX_SIZE = 1024;

void readElements(int array[], unsigned size);

void printSumElementsOnEvenPosition(const int numbers[], unsigned n);

int main() {
    /* Напишете функция, която прочита масив от цели числа с размер n
     * и връща сумата от елементите, които се намират на четна позиция.
     */
    unsigned n;
    std::cin >> n;
    int numbers[MAX_SIZE];
    readElements(numbers, n);
    printSumElementsOnEvenPosition(numbers, n);
    return 0;
}

void readElements(int array[], unsigned size) {
    for (int elementPosition = 0; elementPosition < size; ++elementPosition) {
        std::cin >> array[elementPosition];
    }
}

void printSumElementsOnEvenPosition(const int numbers[], unsigned n) {
    int sum = 0;
    for (int currentPosition = 0; currentPosition < n; ++currentPosition) {
        if (currentPosition % 2 == 0) {
            sum += numbers[currentPosition];
        }
    }
    std::cout << sum << '\n';
}
