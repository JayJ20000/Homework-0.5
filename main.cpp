/**
 * @file main.cpp
 * @author Jalen Jones
 * @date 2025-02-01
 * @brief main implementation
 * 
 * Implementation for the main that runs the methods from the circle class
 */

#include <iostream>
#include "Circle.h"

using namespace std;

int main() {
    Circle c1; // Creating a Circle object

    cout << "Reading circle data from user" << endl;
    c1.read();   // Read user input
    cout << "Displaying circle data:" << endl;
    c1.print();  // Print values

    // Move and resize the circle
    cout << "Moving circle" << endl;
    c1.move(10, 15);   // Move circle
    cout << "Resizing circle to radius" << endl;
    c1.resize(5.5);    // Resize circle
    
    // Display updated attributes
    cout << "Displaying updated circle data:" << endl;
    c1.print(); // Print updated values

    return 0;
}
