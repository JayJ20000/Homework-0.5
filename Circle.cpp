/**
 * @file Circle.cpp
 * @author Jalen Jones
 * @date 2025-02-01
 * @brief Class implementation
 * 
 * Implementation for the circle class
 */

#include <iostream>
#include "Circle.h"

using namespace std;

// Default constructor initializes circle at origin with radius 1.0
Circle::Circle() : x(0), y(0), radius(1.0) {}

// Move the circle to a new position
void Circle::move(int newX, int newY) {
    x = newX;
    y = newY;
}

// Resize the circle with a new radius
void Circle::resize(float newRadius) {
    if (newRadius > 0) { // Ensuring a positive radius
        radius = newRadius;
    } else {
        cout << "Invalid radius. Radius cannot be negative" << endl;
    }
}

// Read values for x, y, and radius from user input
void Circle::read() {
    cout << "Enter x-coordinate: ";
    cin >> x;
    cout << "Enter y-coordinate: ";
    cin >> y;
    cout << "Enter radius: ";
    cin >> radius;
}

// Print the current attributes of the circle
void Circle::print() const {
    cout << "Circle position: (" << x << ", " << y << ") with radius " << radius << endl;
}
