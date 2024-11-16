#ifndef STUDENT_H
#define STUDENT_H

#include<iostream>

using namespace std;

class Student {
private:
    string name;
    int studentNumber;
    float average;
public:
    Student();

    void setName(const string& newName);
    void setStudentNumber(int newStudentNumber);
    void setAverage(float newAverage);

    string getName() const;
    int getStudentNumber() const;
    float getAverage() const;
};

#endif // STUDENT_H
