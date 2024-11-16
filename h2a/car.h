#ifndef CAR_H
#define CAR_H

#include <iostream>

using namespace std;

class Car {
    private:
        string brand;
        string model;
        int yearModel;
    public:
        Car();
        void printData();
        void setBrand(const string newBrandName);
        void setModel(const string newModelName);
        void setYearModel(int newModelYear);
};

#endif // CAR_H
