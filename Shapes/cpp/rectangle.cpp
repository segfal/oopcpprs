
#include "rectangle.hpp"

Rectangle::Rectangle(){
    this->x = 0;
    this->y = 0;
    this->width = 0;
    this->height = 0;
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

Rectangle::Rectangle(int x, int y, int width, int height, int color, int id){
    this->x = x;
    this->y = y;
    this->width = width;
    this->height = height;
    this->color = color;
    this->id = id;
    this->area = width * height;
    this->perimeter = 2 * (width + height);
    this->center_x = x + (width / 2);
    this->center_y = y + (height / 2);
    this->distance = 0;
    this->distance_x = 0;
    this->distance_y = 0;
    this->distance_center = 0;
    this->distance_center_x = 0;
    this->distance_center_y = 0;
}



Rectangle::~Rectangle(){
    // std::cout << "Rectangle deleted" << std::endl;
}


void Rectangle::setX(int x){
    this->x = x;
}


void Rectangle::setY(int y){
    this->y = y;
}


void Rectangle::setWidth(int width){
    this->width = width;
}

void Rectangle::setHeight(int height){
    this->height = height;
}


void Rectangle::setColor(int color){
    this->color = color;
}

void Rectangle::setId(int id){
    this->id = id;
}

void Rectangle::setArea(int area){
    this->area = area;
}

void Rectangle::setPerimeter(int perimeter){
    this->perimeter = perimeter;
}

void Rectangle::setCenterX(int center_x){
    this->center_x = center_x;
}

void Rectangle::setCenterY(int center_y){
    this->center_y = center_y;
}

void Rectangle::setDistance(int distance){
    this->distance = distance;
}

void Rectangle::setDistanceX(int distance_x){
    this->distance_x = distance_x;
}

void Rectangle::setDistanceY(int distance_y){
    this->distance_y = distance_y;
}

void Rectangle::setDistanceCenter(int distance_center){
    this->distance_center = distance_center;
}

void Rectangle::setDistanceCenterX(int distance_center_x){
    this->distance_center_x = distance_center_x;
}

void Rectangle::setDistanceCenterY(int distance_center_y){
    this->distance_center_y = distance_center_y;
}

int Rectangle::getX(){
    return this->x;
}

int Rectangle::getY(){
    return this->y;
}

int Rectangle::getWidth(){
    return this->width;
}

int Rectangle::getHeight(){
    return this->height;
}

int Rectangle::getColor(){
    return this->color;
}

int Rectangle::getId(){
    return this->id;
}

int Rectangle::getArea(){
    return this->area;
}

int Rectangle::getPerimeter(){
    return this->perimeter;
}

int Rectangle::getCenterX(){
    return this->center_x;
}

int Rectangle::getCenterY(){
    return this->center_y;
}

int Rectangle::getDistance(){
    return this->distance;
}

int Rectangle::getDistanceX(){
    return this->distance_x;
}

int Rectangle::getDistanceY(){
    return this->distance_y;
}

int Rectangle::getDistanceCenter(){
    return this->distance_center;
}

int Rectangle::getDistanceCenterX(){
    return this->distance_center_x;
}

int Rectangle::getDistanceCenterY(){
    return this->distance_center_y;
}

void Rectangle::print(){
    std::cout << "Rectangle " << this->id << " at " << this->x << "," << this->y << " with width " << this->width << " and height " << this->height << " and color " << this->color << std::endl;
}
