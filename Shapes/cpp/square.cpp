#include "square.hpp"

Square::Square(){
    this->x = 0;
    this->y = 0;
    this->size = 0;
    this->color = 0;
    this->id = 0;
    this->area = 0;
    this->perimeter = 0;
    this->center_x = 0;
    this->center_y = 0;
    this->distance = 0;
    this->distance_x = 0;
    this->distance_y = 0;
    this->distance_center = 0;
    this->distance_center_x = 0;
    this->distance_center_y = 0;
}

Square::Square(int x, int y, int size, int color, int id){
    this->x = x;
    this->y = y;
    this->size = size;
    this->color = color;
    this->id = id;
    this->area = size * size;
    this->perimeter = 4 * size;
    this->center_x = x + (size / 2);
    this->center_y = y + (size / 2);
    this->distance = 0;
    this->distance_x = 0;
    this->distance_y = 0;
    this->distance_center = 0;
    this->distance_center_x = 0;
    this->distance_center_y = 0;
}


Square::~Square(){
    // std::cout << "Square deleted" << std::endl;
}

void Square::setX(int x){
    this->x = x;
}

void Square::setY(int y){
    this->y = y;
}

void Square::setSize(int size){
    this->size = size;
}

void Square::setColor(int color){
    this->color = color;
}

void Square::setId(int id){
    this->id = id;
}

void Square::setArea(int area){
    this->area = area;
}

void Square::setPerimeter(int perimeter){
    this->perimeter = perimeter;
}

void Square::setCenterX(int center_x){
    this->center_x = center_x;
}

void Square::setCenterY(int center_y){
    this->center_y = center_y;
}

void Square::setDistance(int distance){
    this->distance = distance;
}

void Square::setDistanceX(int distance_x){
    this->distance_x = distance_x;
}

void Square::setDistanceY(int distance_y){
    this->distance_y = distance_y;
}

void Square::setDistanceCenter(int distance_center){
    this->distance_center = distance_center;
}

void Square::setDistanceCenterX(int distance_center_x){
    this->distance_center_x = distance_center_x;
}

void Square::setDistanceCenterY(int distance_center_y){
    this->distance_center_y = distance_center_y;
}

int Square::getX(){
    return this->x;
}

int Square::getY(){
    return this->y;
}

int Square::getSize(){
    return this->size;
}

int Square::getColor(){
    return this->color;
}

int Square::getId(){
    return this->id;
}

int Square::getArea(){
    return this->area;
}

int Square::getPerimeter(){
    return this->perimeter;
}

int Square::getCenterX(){
    return this->center_x;
}

int Square::getCenterY(){
    return this->center_y;
}

int Square::getDistance(){
    return this->distance;
}

int Square::getDistanceX(){
    return this->distance_x;
}

int Square::getDistanceY(){
    return this->distance_y;
}

int Square::getDistanceCenter(){
    return this->distance_center;
}

int Square::getDistanceCenterX(){
    return this->distance_center_x;
}

int Square::getDistanceCenterY(){
    return this->distance_center_y;
}

void Square::print(){
    std::cout << "x: " << this->x << std::endl;
    std::cout << "y: " << this->y << std::endl;
    std::cout << "size: " << this->size << std::endl;
    std::cout << "color: " << this->color << std::endl;
    std::cout << "id: " << this->id << std::endl;
    std::cout << "area: " << this->area << std::endl;
    std::cout << "perimeter: " << this->perimeter << std::endl;
    std::cout << "center_x: " << this->center_x << std::endl;
    std::cout << "center_y: " << this->center_y << std::endl;
    std::cout << "distance: " << this->distance << std::endl;
    std::cout << "distance_x: " << this->distance_x << std::endl;
    std::cout << "distance_y: " << this->distance_y << std::endl;
    std::cout << "distance_center: " << this->distance_center << std::endl;
    std::cout << "distance_center_x: " << this->distance_center_x << std::endl;
    std::cout << "distance_center_y: " << this->distance_center_y << std::endl;
}