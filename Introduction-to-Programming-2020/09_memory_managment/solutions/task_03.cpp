/**
 * @file   task_03.cpp
 * @author Victor Nolev
 * @date   04.01.2021
 * @brief  Solution for Task 3 from Practice 9
 * Requirements: Use dynamic memory wisely
 */

#include <iostream>

void input(int *&arr, int &size);

void filterPrimeNumbers(int *&arr, int &size);

bool isPrime(int integer);

bool removeAt(int *&arr, int &size, int element, int position);

void print(int *&arr, int size);

int main() {
    // Initial size of the array (hardcoded :D)
    int elementsCount = 5;
    // Maximum count of elements that allocated array can store
    int capacity = elementsCount;
    int *elements = new(std::nothrow) int[capacity];

    if (!elements) {
        std::cerr << "Memory is not correctly allocated!\n";
        return 1;
    }

    input(elements, elementsCount);

    filterPrimeNumbers(elements, elementsCount);

    print(elements, elementsCount);

    // Delete allocated memory before terminating the program
    delete[] elements;
    return 0;
}

void input(int *&arr, int &size) {
    for (int i = 0; i < size; ++i) {
        std::cin >> arr[i];
    }
}

void filterPrimeNumbers(int *&arr, int &size) {
    for (int i = 0; i < size; ++i) {
        if (!isPrime(arr[i])) {
            removeAt(arr, size, arr[i], i);
            // We removed desired element
            // by moving elements to the left
            // with one position
            // Therefore we have to check the new element
            // that is now on this position i
            --i;
        }
    }
}

bool isPrime(int integer) {
    const int FIRST_PRIME_NUMBER = 2;

    // Prime numbers can not be less than 2
    if (integer < FIRST_PRIME_NUMBER) {
        return false;
    }
    // The only even integer that is also prime is 2
    if (integer % FIRST_PRIME_NUMBER == 0) {
        return integer == FIRST_PRIME_NUMBER;
    }
    for (size_t i = FIRST_PRIME_NUMBER + 1; i * i < integer; ++i) {
        if (integer % i == 0) {
            return false;
        }
    }
    return true;
}

bool removeAt(int *&arr, int &size, int element, int position) {
    // Validate position (it is legal to add element as new last in the array)
    if (position > size) {
        std::cout << "Entered position is invalid!\n";
        return false;
    }

    // Move all elements to left from desired position
    for (int i = position; i < size - 1; ++i) {
        arr[i] = arr[i + 1];
    }

    // Reduce size of array because of the removed element
    --size;
}

void print(int *&arr, int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << *(arr + i) << ' ';
    }
    std::cout << '\n';
}
