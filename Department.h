#ifndef DEPARTMENT_H
#define DEPARTMENT_H

#include <iostream>
#include <string>

using namespace std;

class Department
{
private:

    string departmentName;
    string hodName;
    string hodNumber;
    string mentorName;
    string section;
    string lectureTheatre;
    string description;

public:

   
    Department();

    
    void setDepartment(string branch);

   
    void displayDepartmentInfo();

    
    

    
    void displaySectionDetails();

    void orientationSchedule();
};

#endif