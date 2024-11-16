#ifndef CAR_H
#define CAR_H

#include<iostream>

using namespace std;

class Car {
private:
    string brand;
    string model;
    int yearModel;
public:
    void printData();
    Car(string newBrand, string newModel, int newYearModel);
};

#endif // CAR_H
