#include "car.h"
#include "rectangle.h"
#include "student.h"

#include <memory>

using namespace std;

int main()
{
    Car objectCar;
    objectCar.setBrand("Mercedes-Benz");
    objectCar.setModel("500 SEL");
    objectCar.setYearModel(1985);

    objectCar.printData();

    Rectangle *objectRectangle = new Rectangle;
    objectRectangle->setHeight(5);
    objectRectangle->setWidth(10);
    cout << "Rectangle area: " << objectRectangle->getArea() << " Circumference: " << objectRectangle->getCircum() << endl;
    delete objectRectangle;
    objectRectangle = nullptr;

    unique_ptr<Student> objectStudent = make_unique<Student>();
    objectStudent->setName("Tapani");
    objectStudent->setStudentNumber(2);
    objectStudent->setAverage(7.5);
    cout << "Student: " << objectStudent->getName() << " Number: " << objectStudent->getStudentNumber() << " Average: " << objectStudent->getAverage() << endl;
}
