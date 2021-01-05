/**
 * @file   task_01.cpp
 * @author Victor Nolev
 * @date   24.11.2020
 * @brief  Solution for Task 1 from Practice 5
 */

#include <iostream>

int main() {
    /*
    * Да се напише програма която извежда на екрана следните фигури:
       Вход: 7
       Изход:

       1
       1 2
       1 2 3
       1 2 3 4
       1 2 3 4 5
       1 2 3 4 5 6
       1 2 3 4 5 6 7
    * */
    unsigned integer;
    std::cin >> integer;
    for (int row = 1; row <= integer; ++row) {
        for (int column = 1; column <= row; ++column) {
            std::cout << column << ' ';
        }
        std::cout << std::endl;
    }
    
    /*  Вход: 7
        Изход:

        1 2 3 4 5 6 7
          1 2 3 4 5 6
            1 2 3 4 5
              1 2 3 4
                1 2 3
                  1 2
                    1
    */
    for (int row = 1; row <= integer; ++row) {
        for (int column = 1; column < row; ++column) {
            std::cout << ' ' << ' ';
        }
        for (int col = 1; col <= integer - row + 1; ++col) {
            std::cout << col << ' ';
        }
        std::cout << std::endl;
    }

    /*
     *  Вход: 5
        Изход:

        *
        **
        ***
        ****
        *****
        ****
        ***
        **
        *

        * */
    int starsCount;
    std::cin >> starsCount;
    for (int row = 1; row <= starsCount ; ++row) {
        for (int col = 1; col <= row ; ++col) {
            std::cout << '*';
        }
        std::cout << std::endl;
    }
    for (int row = starsCount - 1; row >= 1; --row) {
        for (int col = 1; col <= row ; ++col) {
            std::cout << '*';
        }
        std::cout << std::endl;
    }

    /*
     *  Вход: 4
        Изход:

        1 2 3 4 4 3 2 1
          2 3 4 4 3 2
            3 4 4 3
              4 4
            3 4 4 3
          2 3 4 4 3 2
        1 2 3 4 4 3 2 1

     * */
    int anotherInt;
    std::cin >> anotherInt;
    for (int row = 1; row <= anotherInt; ++row) {
        for (int col = 1; col < row; ++col) {
            std::cout << ' ' << ' ';
        }
        for (int col = row; col <= anotherInt; ++col) {
            std::cout << col << ' ';
        }
        for (int col = anotherInt; col >= row; --col) {
            std::cout << col << ' ';
        }
        std::cout << std::endl;
    }
    for (int row = anotherInt - 1; row >= 1; --row) {
        for (int col = 1; col < row; ++col) {
            std::cout << ' ' << ' ';
        }
        for (int col = row; col <= anotherInt; ++col) {
            std::cout << col << ' ';
        }
        for (int col = anotherInt; col >= row ; --col) {
            std::cout << col << ' ';
        }
        std::cout << std::endl;
    }
    return 0;
}
