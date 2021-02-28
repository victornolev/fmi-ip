/**
 * @file   task_01.cpp
 * @author Victor Nolev
 * @date   04.01.2021
 * @brief  Solution for Task 1 from Practice 12
 */

#include <iostream>

bool pushBack(int *&array, size_t &size, int element);

bool hasOnlyOddDigits(int number);

void filterNumbersRec(int *array, size_t sizeArray, int *&outArray, size_t &sizeOut);

int *filterNumbers(int *array, size_t sizeArray, size_t &sizeOut);

int main() {
    int arr[] = {11, 23, 57, 42, 71, 53};

    size_t sizeResult;
    int *result = filterNumbers(arr, sizeof(arr) / sizeof(int), sizeResult);
    if (!result) {
        std::cout << "No memory!\n";
        return 1;
    }
    for (size_t i = 0; i < sizeResult; ++i) {
        std::cout << result[i] << ' ';
    }
    std::cout << '\n';
    // Free up allocated memory
    delete[] result;

    return 0;
}

bool pushBack(int *&array, size_t &size, int element) {
    int *result = new(std::nothrow) int[size + 1];
    if (!result) {
        return false;
    }

    for (size_t i = 0; i < size; ++i) {
        result[i] = array[i];
    }

    result[size] = element;
    delete[] array;

    array = result;
    ++size;

    return true;
}

bool hasOnlyOddDigits(int number) {
    // When there is only one digit
    if (number < 10) {
        return (number % 2 != 0);
    }

    // Recursion will be called
    // if the last digit of number is odd
    return ((number % 10) % 2 != 0)
           && hasOnlyOddDigits(number / 10);

}

void filterNumbersRec(int *array, size_t sizeArray, int *&outArray, size_t &sizeOut) {
    // Bottom -> no elements left in 'array'
    if (sizeArray == 0) {
        return;
    }
    // Add the element if it is matching the condition
    if (hasOnlyOddDigits(*array)) {
        if (!pushBack(outArray, sizeOut, *array)) {
            // Clear on pushBack error
            delete[] outArray;
            outArray = nullptr;
            sizeOut = 0;
        }
    }
    // Move pointer to the next element in 'array' and reduce its size
    filterNumbersRec(array + 1, sizeArray - 1, outArray, sizeOut);
}

int *filterNumbers(int *array, size_t sizeArray, size_t &sizeOut) {
    int *outArray = nullptr;
    sizeOut = 0;

    filterNumbersRec(array, sizeArray, outArray, sizeOut);
    return outArray;
}
