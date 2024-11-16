#include "Student.h"

Student::Student() {

}

void Student::setName(const string& newName) {
    name = newName;
}

string Student::getName() const {
    return name;
}

void Student::setStudentNumber(int newStudentNumber) {
    studentNumber = newStudentNumber;
}

int Student::getStudentNumber() const {
    return studentNumber;
}

void Student::setAverage(float newAverage) {
    average = newAverage;
}

float Student::getAverage() const {
    return average;
}
