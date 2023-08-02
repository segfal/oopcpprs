#ifndef __RECTANGLE_HPP__
#define __RECTANGLE_HPP__
#include <iostream>


struct Rectangle{
    private:
        int x, y;
        int width, height;
        int color;
        int id;
        int area;
        int perimeter;
        int center_x, center_y;
        int distance;
        int distance_x, distance_y;
        int distance_center;
        int distance_center_x, distance_center_y;
    public:
        Rectangle();
        Rectangle(int x, int y, int width, int height, int color, int id);
        ~Rectangle();
        void setX(int x);
        void setY(int y);
        void setWidth(int width);
        void setHeight(int height);
        void setColor(int color);
        void setId(int id);
        void setArea(int area);
        void setPerimeter(int perimeter);
        void setCenterX(int center_x);
        void setCenterY(int center_y);
        void setDistance(int distance);
        void setDistanceX(int distance_x);
        void setDistanceY(int distance_y);
        void setDistanceCenter(int distance_center);
        void setDistanceCenterX(int distance_center_x);
        void setDistanceCenterY(int distance_center_y);
        int getX();
        int getY();
        int getWidth();
        int getHeight();
        int getColor();
        int getId();
        int getArea();
        int getPerimeter();
        int getCenterX();
        int getCenterY();
        int getDistance();
        int getDistanceX();
        int getDistanceY();
        int getDistanceCenter();
        int getDistanceCenterX();
        int getDistanceCenterY();
        void print();
};



#include "rectangle.cpp"
#endif __RECTANGLE_HPP__