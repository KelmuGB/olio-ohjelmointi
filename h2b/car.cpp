#include "car.h"

Car::Car(string newBrand, string newModel, int newYearModel) {
    brand=newBrand;
    model=newModel;
    yearModel=newYearModel;
}

void Car::printData() {
    cout << "Brand: " << this->brand << " Model: " << this->model << " Model year: " << this->yearModel << endl;
}
