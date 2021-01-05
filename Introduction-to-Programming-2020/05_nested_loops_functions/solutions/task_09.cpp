/**
 * @file   task_09.cpp
 * @author Victor Nolev
 * @date   24.11.2020
 * @brief  Solution for Task 9 from Practice 5
 */

#include <iostream>

int sumPrimeNumbers(int start, int end);

bool isPrime(int integer);

int main() {
    /* Напишете функция, която по въведени цели положителни числа a, b (b > a)
       да върне сумата на всички прости числа в интервала [a;b].
       Вход:  2 10
       Изход: 17 // 2+3+5+7
       */
    int a, b;
    std::cin >> a >> b;
    std::cout << sumPrimeNumbers(a, b) << '\n';
    return 0;
}

int sumPrimeNumbers(int start, int end) {
    int sum = 0;
    for (int currentNumber = start; currentNumber <= end; ++currentNumber) {
        if (isPrime(currentNumber)) {
            sum += currentNumber;
        }
    }
    return sum;
}

bool isPrime(int integer) {
    // Smallest prime number is 2
    if (integer < 2) {
        return false;
    }
    // All even numbers are not prime except 2
    if (integer % 2 == 0) {
        return integer == 2;
    }
    for (size_t i = 3; i * i <= integer; ++i) {
        if (integer % i == 0) {
            return false;
        }
    }
    return true;
}
