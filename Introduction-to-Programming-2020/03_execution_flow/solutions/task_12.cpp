/**
 * @file   task_12.cpp
 * @version 1.1
 * @author Victor Nolev
 * @date   05.11.2020
 * @brief  Solution for Task 12 from Practice 3.
 */

#include <iostream>

const int BIG_R = 4; // Radius in Yin-Yang
const int MIDDLE_R = BIG_R / 2;  // Radius of the middle circle in Yin-Yang
const int SMALL_R = BIG_R / 4; // Radius of the small circle in Yin-Yang

void printColorAccordingToXSign(int x);

int main() {
    // Coordinates of our point (assigned to 0 - just in case)
    int x = 0;
    int y = 0;

    std::cout << "Enter coordinates for X and Y (integers): ";
    std::cin >> x >> y; // No validation for the time being

    bool isPointBelowAbscissa = y < 0;

    // Powered by 2 to avoid floating point calculations
    const int BIG_R_SQUARED = BIG_R * BIG_R;
    const int MIDDLE_R_SQUARED = MIDDLE_R * MIDDLE_R;
    const int SMALL_R_SQUARED = SMALL_R * SMALL_R;

    // Distance from the center of Yin-Yang circle (0, 0) to the given point
    const int DISTANCE_FROM_CENTER_SQUARED = (x * x) + (y * y);

    const int COORD_X_CENTER_SMALL_CIRCLE = 0;
    // Determine the sign of Y coordinate (Y equals the MIDDLE_R value)
    const int COORD_Y_CENTER_SMALL_CIRCLE = isPointBelowAbscissa ? -MIDDLE_R : MIDDLE_R;

    // Distance from the center of determined small circle's center to the given point
    // Long but explicit name :D DISTANCE_FROM_SMALL_CIRCLE_CENTER_SQUARED
    const int DISTANCE_FROM_SMALL_CIRCLE_CENTER_SQUARED =
            (COORD_X_CENTER_SMALL_CIRCLE - x) * (COORD_X_CENTER_SMALL_CIRCLE - x) +
            (COORD_Y_CENTER_SMALL_CIRCLE - y) * (COORD_Y_CENTER_SMALL_CIRCLE - y);

    // Cases when point is outside of and on outer contour of Yin-Yang
    if (DISTANCE_FROM_CENTER_SQUARED > BIG_R_SQUARED) {
        std::cout << "The given point is outside from Yin-Yang!" << std::endl;
        return 1; // Terminate the execution of the program
    }
    if (DISTANCE_FROM_CENTER_SQUARED == BIG_R_SQUARED) {
        std::cout << "The given point is on the outer contour of Yin-Yang!" << std::endl;
        return 1; // Terminate the execution of the program
    }

    if (isPointBelowAbscissa) {
        if (DISTANCE_FROM_SMALL_CIRCLE_CENTER_SQUARED <= SMALL_R_SQUARED) {
            std::cout << "The given point is on the white part of small circle in Yin-Yang!" << std::endl;
        } else if (DISTANCE_FROM_SMALL_CIRCLE_CENTER_SQUARED > SMALL_R_SQUARED
                   && DISTANCE_FROM_SMALL_CIRCLE_CENTER_SQUARED <= MIDDLE_R_SQUARED) {
            std::cout << "The given point is on the black part of middle circle in Yin-Yang!" << std::endl;
        } else if (DISTANCE_FROM_SMALL_CIRCLE_CENTER_SQUARED > MIDDLE_R_SQUARED) {
            printColorAccordingToXSign(x);
        } else {
            std::cout << "Can not determine current position!" << std::endl;
        }
    } else {
        // Symmetrically repeatable code here :V
        // We can reduce lines of code
        if (DISTANCE_FROM_SMALL_CIRCLE_CENTER_SQUARED <= SMALL_R_SQUARED) {
            std::cout << "The given point is on the black part of the smallest circle in Yin-Yang!"
                      << std::endl;
        } else if (DISTANCE_FROM_SMALL_CIRCLE_CENTER_SQUARED > SMALL_R_SQUARED
                   && DISTANCE_FROM_SMALL_CIRCLE_CENTER_SQUARED <= MIDDLE_R_SQUARED) {
            std::cout << "The given point is on the white part of the middle circle in Yin-Yang!" << std::endl;
        } else if (DISTANCE_FROM_SMALL_CIRCLE_CENTER_SQUARED > MIDDLE_R_SQUARED) {
            // repeatable code
            printColorAccordingToXSign(x);
        } else {
            std::cout << "Can not determine current position!" << std::endl;
        }
    }
    return 0;
}

void printColorAccordingToXSign(int x) {
    if (x >= 0) {
        std::cout << "The given point is on the black part of big circle in Yin-Yang!" << std::endl;
    } else {
        std::cout << "The given point is on the white part of big circle in Yin-Yang!" << std::endl;
    }
}
