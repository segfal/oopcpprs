// File: cube.hpp

#ifndef __CUBE_HPP__
#define __CUBE_HPP__

#include <iostream>

class Cube {
private:
    int x; // Center coordinates
    int y;
    int z;
    int side; // Cube side length
    int color;
    int id;

public:
    Cube();
    Cube(int x, int y, int z, int side, int color, int id);
    // You can add more constructors if needed

    // Setters
    void setX(int x);
    void setY(int y);
    void setZ(int z);
    void setSide(int side);
    void setColor(int color);
    void setId(int id);

    // Getters
    int getX() const;
    int getY() const;
    int getZ() const;
    int getSide() const;
    int getColor() const;
    int getId() const;

    void print() const;
};

#endif // __CUBE_HPP__
