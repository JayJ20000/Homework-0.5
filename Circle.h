/**
 * @file Circle.h
 * @author Jalen Jones
 * @date 2025-02-01
 * @brief Class header definition
 * 
 * Header file for the Circle class
 */

#ifndef CIRCLE_H
#define CIRCLE_H

// Circle class definition
class Circle {
private:
    int x, y;       // Coordinates of the circle center
    float radius;   // Radius of the circle

public:
    Circle(); // Default constructor

    // Method to move the circle to a new position
    void move(int x, int y);
    
    // Method to resize the circle
    void resize(float radius);
    
    // Method to read circle attributes from user input
    void read();
    
    // Method to print circle attributes to the terminal
    void print() const;
};

#endif // CIRCLE_H


