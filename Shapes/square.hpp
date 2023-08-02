#ifndef __SQUARE_HPP__
#define __SQUARE_HPP__
#include <iostream>


struct Square{
    private:
        int x, y;
        int size;
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
        Square();
        Square(int x, int y, int size, int color, int id);
        ~Square();
        void setX(int x);
        void setY(int y);
        void setSize(int size);
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
        int getSize();
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


#include "square.cpp"





#endif // __SQUARE_HPP__