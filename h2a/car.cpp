#include "car.h"

Car::Car()
{

}

void Car::printData() {
    cout << "Brand: " << brand << " Model: " << model << " Model: " << yearModel << endl;
}

void Car::setBrand(const string newBrandName) {
    brand=newBrandName;
}

void Car::setModel(const string newModelName) {
    model=newModelName;
}

void Car::setYearModel(int newModelYear) {
    yearModel=newModelYear;
}
