// Copyright (c) 2022 Marcus Wehbi All rights reserved.
//
// Created by: Marcus Wehbi
// Date: Sep 26, 2022
// This program asks the user for the radius and then
// displays the circumference using tau.
#include <cmath>
#include <iostream>

int main() {
    // declare constants
    const float TAU = 6.28;

    // declare variables
    float radius, circumference, area;

    // get the radius from the user
    std::cout << "Enter the radius (mm): ";
    std::cin >> radius;

    // calculate the circumference using tau
    circumference = TAU * radius;
    area = M_PI * pow(radius, 2);

    // display the circumference to the user
    std::cout << "\n";
    std::cout << "Circumference = " << circumference << " mm" << std::endl;
    std::cout << "\n";
    std::cout << "Area = " << area << " mm^2" << std::endl;
}
