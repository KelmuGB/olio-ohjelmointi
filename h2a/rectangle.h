#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <iostream>

using namespace std;

class Rectangle {
    private:
        int width;
        int height;
    public:
        Rectangle();
        int getArea();
        int getCircum();
        void setWidth(int newWidth);
        void setHeight(int newHeight);
};

#endif // RECTANGLE_H
