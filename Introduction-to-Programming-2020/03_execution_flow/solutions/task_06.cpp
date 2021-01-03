/**
 * @file   task_06.cpp
 * @author Victor Nolev
 * @date   21.11.2020
 * @brief  Solution for Task 6 from Practice 3.
 * Requirements: Solve task without using loops and further knowledge.
 */

#include <iostream>
#include <cmath>

int main() {
    int a, b, c;
    std::cin >> a >> b >> c;

    double discriminant = b * b - (4 * a * c);

    if (discriminant < 0) {
        std::cout << "No solution in the set of real numbers!" << std::endl;
        return 1;
    } else if (discriminant > 0) {
        double x1 = (-b + sqrt(discriminant)) / (2 * a);
        double x2 = -x1 - b / a;     // Viète's formula
        std::cout << "The equation " << a << "x^2 + " << b << "x + " << c << " = 0"
                  << " has two roots: " << x1 << " and " << x2 << std::endl;
    } else {
        // zero discriminant
        double x = -b / (2 * a);
        std::cout << "The equation " << a << "x^2 + " << b << "x + " << c << " = 0"
                  << " has one double root: " << x << std::endl;
    }
    return 0;
}
