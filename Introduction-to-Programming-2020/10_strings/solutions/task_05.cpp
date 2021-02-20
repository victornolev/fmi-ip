/**
 * @file   task_05.cpp
 * @author Victor Nolev
 * @date   04.01.2021
 * @brief  Solution for Task 5 from Practice 10
 */

#include <iostream>
#include <climits>

const int ERROR_CODE = INT_MIN;

int atoiCustom(const char *string);

int main() {
    const int MAX_SIZE = 100;
    char string[MAX_SIZE];
    // std::cin >> string;
    // We use getline() to be more explicit with the max number of elements in the array
    std::cin.getline(string, MAX_SIZE);
    int integer = atoiCustom(string);
    if (integer == ERROR_CODE) {
        std::cout << "Internal error while converting number to integer\n";
        return 1;
    }
    std::cout << integer;

    return 0;
}

int atoiCustom(const char *string) {
    if (!string) {
        std::cout << "Invalid integer!\n";
        // Create a error constant that marks error?
        // Not very good approach :)
        return ERROR_CODE;
    }

    int result = 0;
    int sign = 1;

    if (*string == '-') {
        sign = -1;
        // Move pointer one position forward
        ++string;
    }

    size_t index = 0;
    while (string[index] != '\0') {
        // Move to the correct digit section in the number
        result *= 10;
        // Convert digit from char to int
        result += string[index] - '0';
        ++index;
    }

    return result * sign;
}
