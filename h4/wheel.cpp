#include "wheel.h"


Wheel::Wheel() {

}

Wheel::Wheel(int s, string t) {
    this->setSize(s);
    this->setType(t);
}

int Wheel::getSize() {
    return size;
}

void Wheel::setSize(int s) {
    size = s;
}

string Wheel::getType() {
    return type;
}

void Wheel::setType(string t) {
    type = t;
}
