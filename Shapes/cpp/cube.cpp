// File: cube.cpp

#include "cube.hpp"

Cube::Cube() : x(0), y(0), z(0), side(0), color(0), id(0) {}

Cube::Cube(int x, int y, int z, int side, int color, int id)
    : x(x), y(y), z(z), side(side), color(color), id(id) {}

// Setters
void Cube::setX(int x) {
    this->x = x;
}

void Cube::setY(int y) {
    this->y = y;
}

void Cube::setZ(int z) {
    this->z = z;
}

void Cube::setSide(int side) {
    this->side = side;
}

void Cube::setColor(int color) {
    this->color = color;
}

void Cube::setId(int id) {
    this->id = id;
}

// Getters
int Cube::getX() const {
    return x;
}

int Cube::getY() const {
    return y;
}

int Cube::getZ() const {
    return z;
}

int Cube::getSide() const {
    return side;
}

int Cube::getColor() const {
    return color;
}

int Cube::getId() const {
    return id;
}

void Cube::print() const {
    std::cout << "Cube (ID: " << id << ") - Center: (" << x << ", " << y << ", " << z
              << "), Side: " << side << ", Color: " << color << std::endl;
}
