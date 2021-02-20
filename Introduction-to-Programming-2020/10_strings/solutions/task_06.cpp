/**
 * @file   task_06.cpp
 * @author Victor Nolev
 * @date   04.01.2021
 * @brief  Solution for Task 6 from Practice 10
 */

#include <iostream>
#include <cstring>

bool isPalindrome(const char *string);

int main() {
    const int MAX_SIZE = 100;
    char string[MAX_SIZE];
    // std::cin >> string;
    // We use getline() to be more explicit with the max number of elements in the array
    std::cin.getline(string, MAX_SIZE);

    if (isPalindrome(string)) {
        std::cout << "Entered string is palindrome!\n";
    } else {
        std::cout << "Entered string is NOT palindrome!\n";
    }

    return 0;
}

bool isPalindrome(const char *string) {
    if (!string) {
        std::cout << "Invalid string!\n";
        return false;
    }

    size_t index = 0;
    size_t length = strlen(string);
    // Some compromise with the memory in the name of less calculations on each iteration
    size_t lastIndexToWatch = length / 2;
    while (index < lastIndexToWatch) {
        if (string[index] != string[length - (index + 1)]) {
            return false;
        }
        ++index;
    }

    // Reaching this line means that the string is palindrome
    return true;
}

