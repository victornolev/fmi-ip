/**
 * @file   task_07.cpp
 * @author Victor Nolev
 * @date   25.11.2020
 * @brief  Solution for Task 7 from Practice 6
 * Requirements: Use fixed size of array - 1024
 */

#include <iostream>

const int MAX_SIZE = 1024;

void readElements(int array[], unsigned size);

unsigned indexStartSequenceSameElements(const int numbers[], unsigned size);

int main() {
    /* Напишете функция, която връща индекса на началото на най-дългата последователност
     * от еднакви числа в масив от цели числа.
     * Пример:
     * Вход: 8
     * 5 9 3 4 4 4 6 6
     * Изход: 3
     * */
    unsigned size;
    std::cin >> size;

    int numbers[MAX_SIZE];
    readElements(numbers, size);

    unsigned index = indexStartSequenceSameElements(numbers, size);
    std::cout << index << '\n';
    return 0;
}

void readElements(int array[], unsigned size) {
    for (int elementPosition = 0; elementPosition < size; ++elementPosition) {
        std::cin >> array[elementPosition];
    }
}

unsigned indexStartSequenceSameElements(const int numbers[], unsigned size) {
    unsigned indexStartSequence = 0;

    unsigned maxSequenceLength = 1;
    unsigned currentSequenceLength = 1;

    for (size_t i = 0; i < size; ++i) {

        if (numbers[i] == numbers[i + 1]) {
            ++currentSequenceLength;
        } else {
            if (currentSequenceLength > maxSequenceLength) {
                maxSequenceLength = currentSequenceLength;
                indexStartSequence = i - currentSequenceLength + 1;
            }
            currentSequenceLength = 1;
        }
    }

    if (currentSequenceLength >= maxSequenceLength) {
        maxSequenceLength = currentSequenceLength;
        indexStartSequence = size - currentSequenceLength;
    }
    return indexStartSequence;
}
