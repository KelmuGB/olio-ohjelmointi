#ifndef CAR_H
#define CAR_H

#include "engine.h"
#include "wheel.h"

class Car
{
private:
    Engine objEngine;
    Wheel objWheel1;
    Wheel objWheel2;
    Wheel objWheel3;
    Wheel objWheel4;
    string model;
    string brand;
public:
    Car();
    Car(string m, string b);
    void setEngine();
    void setWheels();
    string getModel();
    void setModel(string m);
    string getBrand();
    void setBrand(string b);
    void printDetails();
};

#endif // CAR_H
