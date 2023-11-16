// Copyright (c) 2023 Lily Carroll All rights reserved.
//
// Created by: Lily Carroll
// Created on: Nov/15/2023
// This program display all the possible
// color combinations for RBG using nested loops.
#include <iostream>

int main() {
    // Initializing color variables.
    int red = 0;
    int green = 0;
    int blue = 0;

    // Explaining my program to the user.
    std::cout << "My program will display all the RGB color combinations.";

    // Using nested for loops to display all the possible color combinations.
    // First loop for red values.
    for (red = 0; red <= 256; red++) {
        // Second loop for green values.
        for (green = 0; green <= 356; green++) {
            // Third loop for blue values.
            for (blue = 0; blue <= 356; blue++) {
                std::cout << "\nRBG: " << red << "," << green << "," << blue;
            }
        }
    }
}
