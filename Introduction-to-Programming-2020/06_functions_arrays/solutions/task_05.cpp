/**
 * @file   task_05.cpp
 * @author Victor Nolev
 * @date   25.11.2020
 * @brief  Solution for Task 5 from Practice 6
 * Requirements: Use fixed size of array - 1024
 */

#include <iostream>

const int MAX_SIZE = 1024;

void readElements(int array[], unsigned size);

void printPrimeNumbersFromArray(int numbers[], unsigned size);

bool isPrime(int integer);

int main() {
    /* Напишете функция, която изкарва на конзолата само простите числа,
     * които са елементи на масив с размер n, предварително попълнен
     * с числа, прочетени от клавиатурата.
     * Пример:
     * Вход:  5
     * 4 6 7 8 11
     * Изход: 7 11
     * */
    unsigned size;
    std::cin >> size;

    int numbers[MAX_SIZE];
    readElements(numbers, size);
    printPrimeNumbersFromArray(numbers, size);
    return 0;
}

void readElements(int array[], unsigned size) {
    for (int elementPosition = 0; elementPosition < size; ++elementPosition) {
        std::cin >> array[elementPosition];
    }
}
void printPrimeNumbersFromArray(int numbers[], unsigned size) {
    for (size_t i = 0; i < size; ++i) {
        if (isPrime(numbers[i])) {
            std::cout << numbers[i] << ' ';
        }
    }
}

bool isPrime(int integer) {
    const int MIN_PRIME_NUMBER = 2;
    // Smallest prime number is 2
    if (integer < MIN_PRIME_NUMBER) {
        return false;
    }
    // All even numbers are not prime except 2
    if (integer % MIN_PRIME_NUMBER == 0) {
        return integer == MIN_PRIME_NUMBER;
    }
    for (size_t i = MIN_PRIME_NUMBER + 1; i * i <= integer; ++i) {
        if (integer % i == 0) {
            return false;
        }
    }
    return true;
}
