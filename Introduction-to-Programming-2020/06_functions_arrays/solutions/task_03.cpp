/**
 * @file   task_03.cpp
 * @author Victor Nolev
 * @date   25.11.2020
 * @brief  Solution for Task 3 from Practice 6
 * Requirements: Use fixed size of array - 1024
 */

#include <iostream>

const int MAX_SIZE = 1024;

void readElements(int array[], unsigned size);

int productIndexesWithOddNumbers(const int array[], unsigned size);

int main() {
     /* Напишете функция, която връща произведението на всички индекси,
      * на които има нечетни числа.
      *
      * Пример:
      * Вход:  5
      * 4 5 66 3 8
      * Изход: 3
      * */
    unsigned elementsToInput;
    std::cin >> elementsToInput;

    int numbers[MAX_SIZE];
    readElements(numbers, elementsToInput);
    std::cout << productIndexesWithOddNumbers(numbers, elementsToInput) << '\n';
    return 0;
}

void readElements(int array[], unsigned size) {
    for (int elementPosition = 0; elementPosition < size; ++elementPosition) {
        std::cin >> array[elementPosition];
    }
}

int productIndexesWithOddNumbers(const int array[], unsigned size) {
    int productIndexesWithOddNumbers = 1;
    for (int currentPosition = 0; currentPosition < size; ++currentPosition) {
        if (array[currentPosition] % 2 != 0) {
            productIndexesWithOddNumbers *= currentPosition;
        }
    }
    return productIndexesWithOddNumbers;
}
