/**
 * @file   task_02.cpp
 * @author Victor Nolev
 * @date   04.01.2021
 * @brief  Solution for Task 2 from Practice 9
 * Requirements: Use dynamic memory wisely
 */

#include <iostream>

void input(int *&arr, int &size);

bool insertAt(int *&arr, int &size, int &capacity,
              int element, int position);

bool removeAt(int *&arr, int &size, int element, int position);

void print(int *&arr, int size);

int main() {
    int elementsCount = 5;
    // Maximum count of elements that allocated array can store
    int capacity = elementsCount;
    int *elements = new(std::nothrow) int[capacity];

    if (!elements) {
        std::cerr << "Memory is not correctly allocated!\n";
        return 1;
    }

    input(elements, elementsCount);

    int element;
    int position;
    std::cout << "Enter a number and desired position to insert in array:\n";
    std::cin >> element >> position;

    // Hardcoded "tests" for insertAt and removeAt operations
    if (insertAt(elements, elementsCount, capacity, element, position)) {
        std::cout << "The element was inserted at desired position!\n";
        print(elements, elementsCount);
    } else {
        std::cout << "The element could not be inserted! Not enough memory?\n";
    }

    if (removeAt(elements, elementsCount, element, position)) {
        std::cout << "The element was removed!\n";
        print(elements, elementsCount);
    } else {
        std::cout << "The element could not be removed!\n";
    }

    // Delete allocated memory before terminating the program
    delete[] elements;
    return 0;
}

void input(int *&arr, int &size) {
    for (int i = 0; i < size; ++i) {
        std::cin >> arr[i];
    }
}

bool insertAt(int *&arr, int &size, int &capacity,
              int element, int position) {

    // Validate position (it is legal to add element as new last in the array)
    if (position > size) {
        std::cout << "Entered position is invalid!\n";
        return false;
    }

    // If elements in array are more than its capacity - increase capacity
    if (size + 1 > capacity) {
        // Before adding new element we have to allocate enough capacity
        // It is better idea to increase capacity by *2
        // to avoid expensive operation like resizing if we pushBack more than once
        capacity *= 2;
        int *newArray = new(std::nothrow) int[capacity];

        if (!newArray) {
            std::cerr << "Can not allocate new array!\n";
            return false;
        }

        // Copy elements from left side before desired position
        for (int i = 0; i < position; ++i) {
            newArray[i] = arr[i];
        }

        // Insert element at desired position
        newArray[position] = element;

        // Increase the size because of the new inserted element
        ++size;

        // Copy elements from right side after desired position
        for (int i = position + 1; i < size; ++i) {
            newArray[i] = arr[i - 1];
        }

        delete[] arr;
        arr = newArray;
        return true;
    }
    // If there is enough capacity to insert a new element
    // move all elements after the specified position to the right
    for (int i = size; i > position; --i) {
        arr[i] = arr[i - 1];
    }

    // Insert element at desired position
    arr[position] = element;

    // Update the actual size, given by reference
    ++size;
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
