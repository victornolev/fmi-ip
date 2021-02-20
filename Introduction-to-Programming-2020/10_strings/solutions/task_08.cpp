/**
 * @file   task_08.cpp
 * @author Victor Nolev
 * @date   04.01.2021
 * @brief  Solution for Task 8 from Practice 10
 */

#include <iostream>
#include <cstring>

char *dynamicConcatenate(char *string1, char *string2);

int main() {
    const int MAX_SIZE = 100;
    char str1[MAX_SIZE];
    char str2[MAX_SIZE];
    std::cin.getline(str1, MAX_SIZE);
    std::cin.getline(str2, MAX_SIZE);

    char *result = dynamicConcatenate(str1, str2);
    if (!result) {
        std::cout << "Error! Can not allocate result string!\n";
    }
    std::cout << result;
    // Free up allocated memory
    delete[] result;

    return 0;
}

char *dynamicConcatenate(char *string1, char *string2) {
    char *result = new(std::nothrow) char[strlen(string1) + strlen(string2) + 1];
    if (!result) {
        std::cout << "Error! Can not concatenate strings!\n";
        return nullptr;
    }
    // Copy first string
    strcpy(result, string1);
    // Append the second string
    strcat(result, string2);
    return result;
}
