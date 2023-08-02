// File: cylinder.hpp

#ifndef __CYLINDER_HPP__
#define __CYLINDER_HPP__

#include <iostream>

class Cylinder {
private:
    int x; // Center coordinates
    int y;
    int radius; // Cylinder radius
    int height; // Cylinder height
    int color;
    int id;

public:
    Cylinder();
    Cylinder(int x, int y, int radius, int height, int color, int id);
    // You can add more constructors if needed

    // Setters
    void setX(int x);
    void setY(int y);
    void setRadius(int radius);
    void setHeight(int height);
    void setColor(int color);
    void setId(int id);

    // Getters
    int getX() const;
    int getY() const;
    int getRadius() const;
    int getHeight() const;
    int getColor() const;
    int getId() const;

    void print() const;
};

#endif // __CYLINDER_HPP__
