// File: cylinder.cpp

#include "cylinder.hpp"

Cylinder::Cylinder() : x(0), y(0), radius(0), height(0), color(0), id(0) {}

Cylinder::Cylinder(int x, int y, int radius, int height, int color, int id)
    : x(x), y(y), radius(radius), height(height), color(color), id(id) {}

// Setters
void Cylinder::setX(int x) {
    this->x = x;
}

void Cylinder::setY(int y) {
    this->y = y;
}

void Cylinder::setRadius(int radius) {
    this->radius = radius;
}

void Cylinder::setHeight(int height) {
    this->height = height;
}

void Cylinder::setColor(int color) {
    this->color = color;
}

void Cylinder::setId(int id) {
    this->id = id;
}

// Getters
int Cylinder::getX() const {
    return x;
}

int Cylinder::getY() const {
    return y;
}

int Cylinder::getRadius() const {
    return radius;
}

int Cylinder::getHeight() const {
    return height;
}

int Cylinder::getColor() const {
    return color;
}

int Cylinder::getId() const {
    return id;
}

void Cylinder::print() const {
    std::cout << "Cylinder (ID: " << id << ") - Center: (" << x << ", " << y
              << "), Radius: " << radius << ", Height: " << height << ", Color: " << color << std::endl;
}
