#include "car.h"

#include <vector>

using namespace std;

int main()
{
    vector<Car> carList;

    Car objectCar0("Toyota","Camry",2024);
    Car objectCar1("Ford","Mustang",2018);
    Car objectCar2("BMW","X5",2024);

    carList.push_back(objectCar0);
    carList.push_back(objectCar1);
    carList.push_back(objectCar2);

    vector<Car>& cars = carList;

    cout << "listan toinen alkio:" << endl;
    objectCar1.printData();

    cout << endl;
    cout << "kaikkien autojen tiedot:" << endl;
    for(size_t i = 0; i<cars.size(); i++) {
        cars[i].printData();
    }

    return 0;
}
