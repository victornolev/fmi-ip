/**
 * @file   task_04.cpp
 * @author Victor Nolev
 * @date   04.01.2021
 * @brief  Solution for Task 4 from Practice 9
 * Requirements: Use dynamic memory wisely
 */

#include <iostream>

void input(int *&arr, int &size);

int *mergeSortedArrays(int *&arr1, int elementsCount1,
                       int *&arr2, int elementsCount2);

void print(int *&arr, int size);

int main() {
    int elementsCount1 = 5;
    int elementsCount2 = 4;
    // Maximum count of elements that allocated array can store
    int capacity = elementsCount1;
    int *arr1 = new(std::nothrow) int[capacity];
    int *arr2 = new(std::nothrow) int[capacity];

    if (!arr1 || !arr2) {
        std::cout << "Memory is not correctly allocated!\n";
        return 1;
    }
    std::cout << "Input elements for first array sorted: \n";
    input(arr1, elementsCount1);
    std::cout << "Input elements for second array sorted: \n";
    input(arr2, elementsCount2);

    int *mergedArray = mergeSortedArrays(arr1, elementsCount1,
                                         arr2, elementsCount2);

    if (!mergedArray) {
        std::cout << "Memory is not correctly allocated!\n";
        return 1;
    }
    print(mergedArray, elementsCount1 + elementsCount2);

    delete[] arr1;
    delete[] arr2;
    delete[] mergedArray;
    return 0;
}

void input(int *&arr, int &size) {
    for (int i = 0; i < size; ++i) {
        std::cin >> arr[i];
    }
}

int *mergeSortedArrays(int *&arr1, int elementsCount1,
                       int *&arr2, int elementsCount2) {
    int *mergedArray = new(std::nothrow) int[elementsCount1 + elementsCount2];

    if (!mergedArray) {
        std::cout << "Can not allocate new array!\n";
        return nullptr;
    }
    // TODO algorithm here
}

void print(int *&arr, int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << *(arr + i) << ' ';
    }
    std::cout << '\n';
}
