#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <fstream>
#include <string>

using namespace std;
class Student
{
private:
    string name;
    string rollNo;
    string branch;
    string email;
    string mobile;
    string studentID;
    string section;
    string lectureTheatre;
    string status;

public:
    void registerStudent();
    void saveStudent();
    void displayStudent();
    bool isStudentExists();
};
#endif