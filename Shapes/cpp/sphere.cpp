// File: sphere.cpp

#include "sphere.hpp"

Sphere::Sphere() : x(0), y(0), z(0), radius(0), color(0), id(0) {}

Sphere::Sphere(int x, int y, int z, int radius, int color, int id)
    : x(x), y(y), z(z), radius(radius), color(color), id(id) {}

// Setters
void Sphere::setX(int x) {
    this->x = x;
}

void Sphere::setY(int y) {
    this->y = y;
}

void Sphere::setZ(int z) {
    this->z = z;
}

void Sphere::setRadius(int radius) {
    this->radius = radius;
}

void Sphere::setColor(int color) {
    this->color = color;
}

void Sphere::setId(int id) {
    this->id = id;
}

// Getters
int Sphere::getX() const {
    return x;
}

int Sphere::getY() const {
    return y;
}

int Sphere::getZ() const {
    return z;
}

int Sphere::getRadius() const {
    return radius;
}

int Sphere::getColor() const {
    return color;
}

int Sphere::getId() const {
    return id;
}

void Sphere::print() const {
    std::cout << "Sphere (ID: " << id << ") - Center: (" << x << ", " << y << ", " << z
              << "), Radius: " << radius << ", Color: " << color << std::endl;
}
