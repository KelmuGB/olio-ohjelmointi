#include "rectangle.h"

Rectangle::Rectangle() {

}

int Rectangle::getArea() {
    return width*height;
}

int Rectangle::getCircum() {
    return 2*(width+height);
}

void Rectangle::setWidth(int newWidth) {
    width=newWidth;
}

void Rectangle::setHeight(int newHeight) {
    height=newHeight;
}
