// File: sphere.hpp

#ifndef __SPHERE_HPP__
#define __SPHERE_HPP__

#include <iostream>

class Sphere {
private:
    int x; // Center coordinates
    int y;
    int z;
    int radius; // Sphere radius
    int color;
    int id;

public:
    Sphere();
    Sphere(int x, int y, int z, int radius, int color, int id);
    // You can add more constructors if needed

    // Setters
    void setX(int x);
    void setY(int y);
    void setZ(int z);
    void setRadius(int radius);
    void setColor(int color);
    void setId(int id);

    // Getters
    int getX() const;
    int getY() const;
    int getZ() const;
    int getRadius() const;
    int getColor() const;
    int getId() const;

    void print() const;
};

#endif // __SPHERE_HPP__
