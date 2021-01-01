/**
 * @file   task_01.cpp
 * @author Victor Nolev
 * @date   21.11.2020
 * @brief  Solution for Task 1 from Practice 1
 */
 
 #include <iostream>
 
 int main() {
    int firstNumber, secondNumber;
    std::cin >> firstNumber >> secondNumber;

    int copy = firstNumber;
    firstNumber = secondNumber;
    secondNumber = copy;

    std::cout << firstNumber << " " << secondNumber << '\n';
    return 0;
}
